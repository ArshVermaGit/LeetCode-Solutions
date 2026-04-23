// Title: Sum of Distances
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-distances/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> distance(vector<int>& 
nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) mp[nums[i]].
        vector<long long> ans(n);
        for(auto &it : mp) {
            auto &v = it.second;
            int m = v.size();
            vector<long long> pref(m + 1);
            for(int i = 0; i < m; i++) pref[i + 
            for(int i = 0; i < m; i++) {
                long long left = (long long)v
push_back(i);
1] = pref[i] + v[i];
[i] * i - pref[i];
                long long right = (pref[m] - 
pref[i + 1]) - (long long)v[i] * (m - i - 1);
                ans[v[i]] = left + right;
            }
        }
        return ans;
    }
};
