// Title: Two Furthest Houses With Different Colors
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/two-furthest-houses-with-different-colors/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(colors[i] != colors[0]) ans = max
(ans, i);
            if(colors[i] != colors[n-1]) ans = 
max(ans, n-1-i);
        }
        return ans;
    }
};
