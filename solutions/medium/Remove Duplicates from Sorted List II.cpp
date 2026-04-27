// Title: Remove Duplicates from Sorted List II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

            if(head->next && head->val == head->next->val){
                int val = head->val;
                while(head && head->val == val) head = head->next;
                prev->next = head;
            } else {
                prev = head;
                head = head->next;
            }
        }
        return dummy.next;
    }
};
