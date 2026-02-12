// Title: Longest Balanced Substring I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-balanced-substring-i/

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            int distinct = 0, maxf = 0;
            for (int j = i; j < n; j++) {
                if (freq[s[j]-'a']++ == 0) distinct++;
                maxf = max(maxf, freq[s[j]-'a']);
                if ((j - i + 1) == distinct * maxf) ans = 
max(ans, j - i + 1);
            }
        }
        return ans;
    }
};

