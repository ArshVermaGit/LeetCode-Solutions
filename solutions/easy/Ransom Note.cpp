// Title: Ransom Note
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/ransom-note/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string 
magazine) {

        vector<int> cnt(26,0);

        for(char c:magazine)
            cnt[c-'a']++;

        for(char c:ransomNote)
            if(--cnt[c-'a']<0)
                return false;

        return true;
    }
};
