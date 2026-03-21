// Title: Flip Square Submatrix Vertically
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/flip-square-submatrix-vertically/

class Solution {
public:
    vector<vector<int>> reverseSubmatrix
(vector<vector<int>>& grid, int x, int 
y, int k) {
        
        for(int i = 0; i < k / 2; i++) {
            for(int j = 0; j < k; j++) {
                swap(grid[x + i][y + j], 
            }
        }
        
        return grid;
    }
};
grid[x + k - 1 - i][y + j]);
