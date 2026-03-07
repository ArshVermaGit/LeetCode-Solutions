// Title: Minimum Number of Flips to Make the Binary String Alternating
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        int alt1 = 0, alt2 = 0;
        int res = INT_MAX;

        for (int i = 0; i < 2 * n; i++) {

            if (t[i] != (i % 2 ? '1' : '0')) alt1++;
            if (t[i] != (i % 2 ? '0' : '1')) alt2++;

            if (i >= n) {
                if (t[i-n] != ((i-n) % 2 ? '1' : '0')) 
alt1--;
                if (t[i-n] != ((i-n) % 2 ? '0' : '1')) 
alt2--;
            }

            if (i >= n - 1)
                res = min(res, min(alt1, alt2));
        }

        return res;
    }
};
