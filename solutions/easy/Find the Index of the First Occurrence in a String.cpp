// Title: Find the Index of the First Occurrence in a String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for (int i = 0; i + m <= n; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) 
j++;
            if (j == m) return i;
        }
        return -1;
    }
};

