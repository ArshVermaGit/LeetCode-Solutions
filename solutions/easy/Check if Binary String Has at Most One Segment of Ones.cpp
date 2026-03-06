// Title: Check if Binary String Has at Most One Segment of Ones
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/

class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};
