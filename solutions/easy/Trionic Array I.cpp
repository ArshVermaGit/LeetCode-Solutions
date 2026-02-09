// Title: Trionic Array I
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/trionic-array-i/

#include <vector>

class Solution {
public:
    bool isTrionic(std::vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }
        
        if (i == 0 || i == n - 1) return false;
        int p = i;

        while (i + 1 < n && nums[i] > nums[i + 1]) {
            i++;
        }

        if (i == p || i == n - 1) return false;
        int q = i;

        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }

        return i == n - 1;
    }
};
