// Title: Partitioning Into Minimum Number Of Deci-Binary Numbers
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/

class Solution {
public:
    int minPartitions(string n) {
        int mx = 0;
        for (char c : n) {
            mx = max(mx, c - '0');
            if (mx == 9) break;
        }
        return mx;
    }
};
