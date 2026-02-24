// Title: Sum of Root To Leaf Binary Numbers
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

class Solution {
public:
    int dfs(TreeNode* node, int curr) {
        if (!node) return 0;
        curr = (curr << 1) | node->val;
        if (!node->left && !node->right) return 
        return dfs(node->left, curr) + dfs
(node->right, curr);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};
curr;
