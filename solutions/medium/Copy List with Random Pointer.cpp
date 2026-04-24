// Title: Copy List with Random Pointer
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/copy-list-with-random-pointer/

using namespace std;

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        vector<Node*> oldNodes;
        unordered_map<Node*, int> index;
        Node* curr = head;
        int i = 0;
        while(curr) {
            oldNodes.push_back(curr);
            index[curr] = i++;
            curr = curr->next;
        }
        vector<Node*> newNodes(oldNodes.size());
        for(int i = 0; i < oldNodes.size(); i
            newNodes[i] = new Node(oldNodes[i]
++) {
->val);
        }
        for(int i = 0; i < oldNodes.size(); i
++) {
            if(oldNodes[i]->next)
                newNodes[i]->next = newNodes
[index[oldNodes[i]->next]];
            if(oldNodes[i]->random)
                newNodes[i]->random = newNodes
[index[oldNodes[i]->random]];
        }
        return newNodes[0];
    }
};
