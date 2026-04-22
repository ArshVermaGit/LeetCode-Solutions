// Title: Words Within Two Edits of Dictionary
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/words-within-two-edits-of-dictionary/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> twoEditWords(vector<string>& 
queries, vector<string>& dictionary) {
        vector<string> ans;
        
        for(string &q:queries){
            for(string &d:dictionary){
                int diff=0;
                
                for(int i=0;i<q.size();i++)
                    if(q[i]!=d[i]) diff++;
                
                if(diff<=2){
                    ans.push_back(q);
                    break;
                }
            }
        }
        
        return ans;
    }
};
