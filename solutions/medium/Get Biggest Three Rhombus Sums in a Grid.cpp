// Title: Get Biggest Three Rhombus Sums in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/get-biggest-three-rhombus-sums-in-a-grid/


        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                s.insert(grid[i][j]);
                for (int k = 1; ; k++) {
                    if (i - k < 0 || i + k >= m || j - 
k < 0 || j + k >= n) break;
                    int sum = 0;
                    int x = i - k, y = j;
                    for (int t = 0; t < k; t++) sum += 
grid[x + t][y + t];
                    x = i; y = j + k;
                    for (int t = 0; t < k; t++) sum += 
grid[x + t][y - t];
                    x = i + k; y = j;
                    for (int t = 0; t < k; t++) sum += 
grid[x - t][y - t];
                    x = i; y = j - k;
                    for (int t = 0; t < k; t++) sum += 
grid[x - t][y + t];
                    s.insert(sum);
                }
            }
        }
        set<int, greater<int>> s;
        int m = grid.size(), n = grid[0].size();
    vector<int> getBiggestThree(vector<vector<int>>& 
grid) {
class Solution {
public:
#include <bits/stdc++.h>
using namespace std;

