// Title: Two Sum II - Input Array Is Sorted
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/two-sum-ii---input-array-is-sorted/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int 
target) {
        int l=0,r=numbers.size()-1;
        
        while(l<r){
            int s=numbers[l]+numbers[r];
            
            if(s==target) return {l+1,r+1};
            
            if(s<target) l++;
            else r--;
        }
        
        return {};
    }
};
