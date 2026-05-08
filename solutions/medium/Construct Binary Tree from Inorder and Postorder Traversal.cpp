// Title: Construct Binary Tree from Inorder and Postorder Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();

        for (int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }

        postIdx = n - 1;

        return dfs(inorder, postorder, 0, n - 1);
    }
};
