// Title: Reverse Nodes in k-Group
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-nodes-in-k-group/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroupEnd = &dummy;

        while (true) {
            ListNode* kth = prevGroupEnd;
            for (int i = 0; i < k && kth; i++) kth = 
            if (!kth) break;

            ListNode* groupStart = prevGroupEnd->next;
            ListNode* nextGroupStart = kth->next;

kth->next;
            ListNode* prev = nextGroupStart;
            ListNode* curr = groupStart;

            while (curr != nextGroupStart) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            prevGroupEnd->next = kth;
            prevGroupEnd = groupStart;
        }

        return dummy.next;
    }
};
