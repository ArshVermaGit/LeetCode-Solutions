// Title: Check If a String Contains All Binary Codes of Size K
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if (n < k) return false;
        
        unordered_set<int> seen;
        int mask = 0, all = (1 << k) - 1;
        
        for (int i = 0; i < n; i++) {
            mask = ((mask << 1) & all) | (s[i] - 
'0');
            if (i >= k - 1) seen.insert(mask);
        }
        
        return seen.size() == (1 << k);
    }
};
