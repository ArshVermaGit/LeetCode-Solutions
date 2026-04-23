// Title: Linked List Cycle
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/linked-list-cycle/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> v;
        while(head) {
            for(auto node : v) {
                if(node == head) return true;
            }
            v.push_back(head);
            head = head->next;
        }
        return false;
    }
};
