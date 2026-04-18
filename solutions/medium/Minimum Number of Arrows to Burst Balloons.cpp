// Title: Minimum Number of Arrows to Burst Balloons
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& 
p) {
        sort(p.begin(),p.end(),[](auto&a,auto&b)
{return a[1]<b[1];});
        long long end=p[0][1];
        int ans=1;
        for(int i=1;i<p.size();i++){
            if(p[i][0]>end){
                ans++;
                end=p[i][1];
            }
        }
        return ans;
    }
};
