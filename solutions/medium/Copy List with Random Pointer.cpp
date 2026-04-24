// Title: Copy List with Random Pointer
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/copy-list-with-random-pointer/

        if(!head) return NULL;
        
        Node* curr = head;
        while(curr) {
            Node* next = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = next;
            curr = next;
        }
        
        curr = head;
        while(curr) {
            if(curr->random) curr->next->random 
            curr = curr->next->next;
        }
= curr->random->next;
        
        curr = head;
        Node* newHead = head->next;
        while(curr) {
            Node* copy = curr->next;
            curr->next = copy->next;
            if(copy->next) copy->next = 
copy->next->next;
            curr = curr->next;
        }
        
    Node* copyRandomList(Node* head) {
public:
class Solution {

using namespace std;
#include <bits/stdc++.h>
