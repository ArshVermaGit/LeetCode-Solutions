// Title: Rotate List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-list/

};
        tail->next = head;
        int steps = len - k;
        ListNode* newTail = head;
        for (int i = 1; i < steps; i++) newTail = newTail->next;
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
