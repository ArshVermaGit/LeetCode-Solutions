// Title: Simplify Path
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/simplify-path/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string cur;
        for(int i=0;i<=path.size();i++){
            if(i==path.size() || path[i]=='/'){
                if(cur==".."){
                    if(!st.empty()) st.pop();
                }
                else if(cur!="" && cur!=".") st.
push(cur);
                cur="";
            } else cur+=path[i];
        }
        string ans;
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        return ans.empty()?"/":ans;
    }
};
