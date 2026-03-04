// Title: Gray Code
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/gray-code/

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        int size = 1 << n;
        for (int i = 0; i < size; i++)
            res.push_back(i ^ (i >> 1));
        return res;
    }
};
