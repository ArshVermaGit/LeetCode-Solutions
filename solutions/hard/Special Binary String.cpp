// Title: Special Binary String
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/special-binary-string/

class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> subs;
        int count = 0, start = 0;
        for (int i = 0; i < s.size(); i++) {
            count += s[i] == '1' ? 1 : -1;
            if (count == 0) {
                string inner = s.substr(start + 1, 
i - start - 1);
                subs.push_back("1" + 
makeLargestSpecial(inner) + "0");
                start = i + 1;
            }
        }
        sort(subs.rbegin(), subs.rend());
        string res;
        for (auto &str : subs) res += str;
        return res;
    }
};
