// Title: Maximum Amount of Money Robot Can Earn
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-amount-of-money-robot-can-earn/

                    int val = coins[i][j];
                    
                    if(i>0 && dp[i-1][j][k] != 
INF){
                        dp[i][j][k] = max(dp[i]
[j][k], dp[i-1][j][k] + val);
                    }
                    if(j>0 && dp[i][j-1][k] != 
INF){
                        dp[i][j][k] = max(dp[i]
[j][k], dp[i][j-1][k] + val);
                    }
                    
                    if(val < 0 && k>0){
                        if(i>0 && dp[i-1][j]
[k-1] != INF){
                            dp[i][j][k] = max(dp
[i][j][k], dp[i-1][j][k-1]);
                        }
                        if(j>0 && dp[i][j-1]
[k-1] != INF){
                            dp[i][j][k] = max(dp
[i][j][k], dp[i][j-1][k-1]);
                        }
                    }
                }
            }
        }
        
        return max({dp[m-1][n-1][0], dp[m-1]
[n-1][1], dp[m-1][n-1][2]});
    }
};
