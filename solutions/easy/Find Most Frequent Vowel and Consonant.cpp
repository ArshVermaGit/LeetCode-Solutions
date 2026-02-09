// Title: Find Most Frequent Vowel and Consonant
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/

class Solution {
public:
    int maxFreqSum(string s) {
        int cnt[26] = {0};
        for (char c : s) cnt[c - 'a']++;

        int v = 0, c = 0;
        for (int i = 0; i < 26; i++) {
            if (i=='a'-'a'||i=='e'-'a'||i=='i'-'a'||
i=='o'-'a'||i=='u'-'a')
                v = max(v, cnt[i]);
            else
                c = max(c, cnt[i]);
        }
        return v + c;
    }
};

