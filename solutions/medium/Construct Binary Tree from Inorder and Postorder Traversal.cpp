// Title: Construct Binary Tree from Inorder and Postorder Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/


        int mid = pos[val];

class Solution {
public:
    unordered_map<int, int> pos;
    int idx;

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int l, int r) {
        if (l > r) return NULL;

        int val = postorder[idx--];
        TreeNode* root = new TreeNode(val);
