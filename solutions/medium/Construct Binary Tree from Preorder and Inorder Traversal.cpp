// Title: Construct Binary Tree from Preorder and Inorder Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();

        for (int i = 0; i < n; ++i)
            pos[inorder[i]] = i;

        return build(preorder, 0, n - 1);
    }
};
