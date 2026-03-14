// Title: Majority Element
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        
        for(int x : nums){
            if(count == 0) candidate = x;
            count += (x == candidate) ? 1 : -1;
        }
        
        return candidate;
    }
};
