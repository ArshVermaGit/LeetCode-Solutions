// Title: Remove Nth Node From End of List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

        if(!node) return 0;
        int count = dfs(node->next, n) + 1;
        if(count == n + 1) node->next = node->next->next;
        return count;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = dfs(head, n);
        if(count == n) return head->next;
        return head;
    }
};
