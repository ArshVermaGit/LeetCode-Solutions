// Title: Valid Palindrome
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char c:s)
            if(isalnum(c))
                t.push_back(tolower(c));
        
        string r=t;
        reverse(r.begin(), r.end());
        
        return t==r;
    }
};
