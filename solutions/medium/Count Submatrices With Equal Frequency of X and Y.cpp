// Title: Count Submatrices With Equal Frequency of X and Y
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y/

cntX(m, vector<int>(n));
        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int val = 0;
                if (grid[i][j] == 'X') val = 1;
                else if (grid[i][j] == 'Y') val = -1;

                sum[i][j] = val;
                cntX[i][j] = (grid[i][j] == 'X');

                if (i > 0) {
                    sum[i][j] += sum[i-1][j];
                    cntX[i][j] += cntX[i-1][j];
                }
                if (j > 0) {
                    sum[i][j] += sum[i][j-1];
                    cntX[i][j] += cntX[i][j-1];
                }
                if (i > 0 && j > 0) {
                    sum[i][j] -= sum[i-1][j-1];
                    cntX[i][j] -= cntX[i-1][j-1];
                }

                if (sum[i][j] == 0 && cntX[i][j] > 0) 
ans++;
            }
        }

        return ans;
    }
};
