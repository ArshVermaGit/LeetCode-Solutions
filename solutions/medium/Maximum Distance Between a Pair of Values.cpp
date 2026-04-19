// Title: Maximum Distance Between a Pair of Values
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& a, 
vector<int>& b) {
        int i=0,j=0,ans=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                ans=max(ans,j-i);
                j++;
            } else i++;
        }
        return ans;
    }
};
