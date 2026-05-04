// Title: Same Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/same-tree/

            TreeNode* b = sq.top(); sq.pop();
            if (!a && !b) continue;
            if (!a || !b) return false;
            if (a->val != b->val) return false;
            sp.push(a->left);
            sq.push(b->left);
            sp.push(a->right);
            sq.push(b->right);
        }
        return sp.empty() && sq.empty();
    }
};
