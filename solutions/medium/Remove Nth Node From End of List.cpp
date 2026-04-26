// Title: Remove Nth Node From End of List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

        return dummy->next;
    }
};
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
