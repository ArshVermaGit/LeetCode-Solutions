// Title: Maximum Score From Grid Operations
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-score-from-grid-operations/

            }
        }

        // Find the maximum value in the DP table
        long long maxScore = -INF;
        for (int i = 0; i <= n; ++i) {
            maxScore = max(maxScore, dp[0][i]);
        }

        return maxScore;
    }
};
