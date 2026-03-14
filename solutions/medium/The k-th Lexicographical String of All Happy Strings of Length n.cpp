// Title: The k-th Lexicographical String of All Happy Strings of Length n
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/

class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> res;
        string s;
        
        function<void()> dfs = [&]() {
            if(s.size() == n){
                res.push_back(s);
                return;
            }
            
            for(char c : {'a','b','c'}){
                if(s.empty() || s.back() != c){
                    s.push_back(c);
                    dfs();
                    s.pop_back();
                }
            }
        };
        
        dfs();
        
        if(k > res.size()) return "";
        return res[k-1];
    }
};
