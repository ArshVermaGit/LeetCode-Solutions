// Title: Minimum Changes To Make Alternating Binary String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int p1 = 0, p2 = 0;

        for (int i = 0; i < n; i++) {
            char c1 = (i % 2 == 0) ? '0' : '1';
            char c2 = (i % 2 == 0) ? '1' : '0';

            if (s[i] != c1) p1++;
            if (s[i] != c2) p2++;
        }

        return min(p1, p2);
    }
};
