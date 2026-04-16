// Title: Closest Equal Element Queries
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/closest-equal-element-queries/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, 
vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<n;i++) mp[nums[i]].
push_back(i);
        vector<int> ans;
        for(int idx: queries){
            auto &v = mp[nums[idx]];
            if(v.size()==1){
                ans.push_back(-1);
                continue;
            }
            int pos = lower_bound(v.begin(), v.
end(), idx) - v.begin();
            int best = 1e9;
            if(pos>0) best=min(best, abs(idx-v
[pos-1]));
            if(pos<v.size()-1) best=min(best, 
abs(v[pos+1]-idx));
            best=min(best, n-abs(idx-v[0]));
            best=min(best, n-abs(idx-v.back()));
            ans.push_back(best);
        }
        return ans;
    }
};
