// Title: Minimum Absolute Difference in Sliding Submatrix
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix/

        for (int i = 0; i <= m - k; i++) {
            for (int j = 0; j <= n - k; j++) {
                set<int> s;

                for (int x = i; x < i + k; x++) {
                    for (int y = j; y < j + k; y++) {
                        s.insert(grid[x][y]);
                    }
                }

                if (s.size() <= 1) {
                    ans[i][j] = 0;
                    continue;
                }

                int res = INT_MAX;
                auto it = s.begin();
                auto prev = it;
                it++;

                while (it != s.end()) {
                    res = min(res, *it - *prev);
                    prev = it;
                    it++;
                }

                ans[i][j] = res;
            }
        }

        return ans;
    }
};
