// Title: Min Stack
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/min-stack/

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> s, mn;
public:
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        if(mn.empty() || val <= mn.top()) mn.
        else mn.push(mn.top());
    }
    
    void pop() {
        s.pop();
        mn.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mn.top();
    }
};
push(val);
