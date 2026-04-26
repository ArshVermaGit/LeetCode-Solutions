// Title: Remove Nth Node From End of List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

        int pos = len - n;
        
        if(pos == 0) return head->next;
        
        temp = head;
        for(int i = 1; i < pos; i++) temp = temp->next;
        
        temp->next = temp->next->next;
        
        return head;
    }
};
