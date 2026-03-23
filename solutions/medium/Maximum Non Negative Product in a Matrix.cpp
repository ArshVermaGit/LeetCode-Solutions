// Title: Maximum Non Negative Product in a Matrix
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/

            maxDp[i][0] = maxDp[i-1][0] * grid[i][0];
            minDp[i][0] = maxDp[i][0];
        }
        
        // fill first row
        for(int j = 1; j < n; j++) {
            maxDp[0][j] = maxDp[0][j-1] * grid[0][j];
            minDp[0][j] = maxDp[0][j];
        }
        
        // fill rest of grid
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                
                long long val = grid[i][j];
                
                long long a = maxDp[i-1][j] * val;
                long long b = minDp[i-1][j] * val;
                long long c = maxDp[i][j-1] * val;
                long long d = minDp[i][j-1] * val;
                
                maxDp[i][j] = max({a,b,c,d});
                minDp[i][j] = min({a,b,c,d});
            }
        }
        
        long long ans = maxDp[m-1][n-1];
        
        if(ans < 0) return -1;
        
        return ans % MOD;
    }
};
