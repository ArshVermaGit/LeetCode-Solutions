// Title: Maximum Path Score in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-path-score-in-a-grid/

                    }
                }
            }
        }
        
        int ans = -1;
        for (int c = 0; c <= k; c++)
            ans = max(ans, dp[m - 1][n - 1][c]);
        
        return ans < 0 ? -1 : ans;
    }
};
