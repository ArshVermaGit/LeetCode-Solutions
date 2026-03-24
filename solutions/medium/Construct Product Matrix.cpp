// Title: Construct Product Matrix
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-product-matrix/


class Solution {
public:
    vector<vector<int>> constructProductMatrix
(vector<vector<int>>& grid) {
        const int mod = 12345;
        int n = grid.size(), m = grid[0].size();
        int N = n * m;
        
        vector<long long> prefix(N, 1), suffix(N, 1);
        vector<int> flat;
        flat.reserve(N);
        
        for(auto &row : grid)
            for(int x : row)
                flat.push_back(x % mod);
        
        for(int i = 1; i < N; i++)
            prefix[i] = (prefix[i-1] * flat[i-1]) % mod;
        
        for(int i = N-2; i >= 0; i--)
            suffix[i] = (suffix[i+1] * flat[i+1]) % mod;
        
        vector<vector<int>> ans(n, vector<int>(m));
        
        for(int i = 0; i < N; i++) {
            long long val = (prefix[i] * suffix[i]) % mod;
            ans[i/m][i%m] = val;
        }
        
        return ans;
    }
};
