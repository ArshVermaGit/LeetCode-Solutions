// Title: Copy List with Random Pointer
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/copy-list-with-random-pointer/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<Node*, Node*> mp;
    
    Node* dfs(Node* head) {
        if(!head) return NULL;
        if(mp.count(head)) return mp[head];
        Node* node = new Node(head->val);
        mp[head] = node;
        node->next = dfs(head->next);
        node->random = dfs(head->random);
        return node;
    }
    
    Node* copyRandomList(Node* head) {
        return dfs(head);
    }
};
