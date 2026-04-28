// Title: Minimum Operations to Make a Uni-Value Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/

            if (val % x != r) return -1;
        }
        int n = v.size();
        nth_element(v.begin(), v.begin() + n / 2, v.end());
        int median = v[n / 2];
        int ops = 0;
        for (int val : v) {
            ops += abs(val - median) / x;
        }
        return ops;
    }
};
