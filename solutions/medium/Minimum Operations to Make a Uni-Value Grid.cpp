// Title: Minimum Operations to Make a Uni-Value Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/

        for (int val : v) {
            if (val % x != r) return -1;
        }
        sort(v.begin(), v.end());
        int median = v[v.size() / 2];
        int ops = 0;
        for (int val : v) {
            ops += abs(val - median) / x;
        }
        return ops;
    }
};
