// Title: Minimum Deletions to Make String Balanced
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int b = 0;
        int res = 0;
        for(char c : s) {
            if(c == 'b') b++;
            else res = min(res + 1, b);
        }
        return res;
    }
};

