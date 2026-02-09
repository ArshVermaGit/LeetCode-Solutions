// Title: Balance a Binary Search Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/balance-a-binary-search-tree/

class Solution {
    vector<TreeNode*> nodes;

public:
    TreeNode* balanceBST(TreeNode* root) {
        nodes.clear();
        inorder(root);
        return build(0, nodes.size() - 1);
    }

private:
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        nodes.push_back(root);
        inorder(root->right);
    }

    TreeNode* build(int start, int end) {
        if (start > end) return nullptr;
        
        int mid = start + (end - start) / 2;
        TreeNode* root = nodes[mid];
        
        root->left = build(start, mid - 1);
        root->right = build(mid + 1, end);
        
        return root;
    }
};
