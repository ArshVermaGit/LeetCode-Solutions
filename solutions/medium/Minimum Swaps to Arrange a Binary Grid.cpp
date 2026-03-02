// Title: Minimum Swaps to Arrange a Binary Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> trailing(n);
        
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = n - 1; j >= 0 && grid[i][j] 
== 0; j--) cnt++;
            trailing[i] = cnt;
        }
        
        int swaps = 0;
        
        for (int i = 0; i < n; i++) {
            int need = n - i - 1;
            int j = i;
            while (j < n && trailing[j] < need) j++;
            if (j == n) return -1;
            while (j > i) {
                swap(trailing[j], trailing[j - 1]);
                swaps++;
                j--;
            }
        }
        
        return swaps;
    }
};
