// Title: Minimum Removals to Balance Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-removals-to-balance-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = 0;
        int best = 0;
        for(int i = 0; i < n; ++i) {
            while(j < n && (long long)nums[j] <= (long 
long)nums[i] * k) j++;
            best = max(best, j - i);
        }
        return n - best;
    }
};

