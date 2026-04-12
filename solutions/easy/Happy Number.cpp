// Title: Happy Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/happy-number/

class Solution {
public:
    int f(int n){
        int s=0;
        while(n){
            int d=n%10;
            s+=d*d;
            n/=10;
        }
        return s;
    }
    
    bool isHappy(int n) {
        unordered_set<int> st;
        
        while(n!=1 && !st.count(n)){
            st.insert(n);
            n=f(n);
        }
        
        return n==1;
    }
};
