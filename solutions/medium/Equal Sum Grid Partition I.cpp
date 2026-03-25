// Title: Equal Sum Grid Partition I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/equal-sum-grid-partition-i/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        long long total = 0;
        for (auto &r : grid) for (int v : r) total += 
v;
        
        long long s = 0;
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) s += grid[i]
[j];
            if (s * 2 == total) return true;
        }
        
        s = 0;
        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) s += grid[i]
[j];
            if (s * 2 == total) return true;
        }
        
        return false;
    }
};
