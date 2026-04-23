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
        int n = nums.size();
        vector<long long> ans(n);
        unordered_map<int,long long> cnt, sum;
        
        for(int i = 0; i < n; i++) {
            ans[i] += (long long)i * cnt[nums
            cnt[nums[i]]++;
            sum[nums[i]] += i;
        }
        
        cnt.clear();
        sum.clear();
        
        for(int i = n - 1; i >= 0; i--) {
            ans[i] += sum[nums[i]] - (long long)
            cnt[nums[i]]++;
[i]] - sum[nums[i]];
i * cnt[nums[i]];
            sum[nums[i]] += i;
        }
        
        return ans;
    }
};
