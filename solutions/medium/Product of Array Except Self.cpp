// Title: Product of Array Except Self
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/product-of-array-except-self/

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        // Step 1: Prefix product
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Step 2: Suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};
#include <vector>
using namespace std;

class Solution {
public:
