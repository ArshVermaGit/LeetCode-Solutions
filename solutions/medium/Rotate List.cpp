// Title: Rotate List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-list/

        while (k--) {
            ListNode* prev = NULL;
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int len = 0;
        ListNode* temp = head;
        while (temp) {
            temp = temp->next;
            len++;
        }
        k %= len;
