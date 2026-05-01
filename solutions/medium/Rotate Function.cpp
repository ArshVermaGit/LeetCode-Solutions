// Title: Rotate Function
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-function/

        }
        
        long ans = f;
        
        for (int k = 1; k < n; k++) {
            f = f + sum - (long)n * nums[n - k];
            ans = max(ans, f);
        }
        
        return (int)ans;
    }
};
