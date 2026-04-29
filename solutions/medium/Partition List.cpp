// Title: Partition List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/partition-list/

                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        
        greater->next = nullptr;
        less->next = greaterDummy.next;
        
        return lessDummy.next;
    }
};
