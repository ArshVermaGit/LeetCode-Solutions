// Title: Find All Possible Stable Binary Arrays II
            // Difficulty: Hard
            // Language: Python
            // Link: https://leetcode.com/problems/find-all-possible-stable-binary-arrays-ii/

        MOD = 10**9 + 7

        dp0 = [[0]*(one+1) for _ in range(zero+1)]
        dp1 = [[0]*(one+1) for _ in range(zero+1)]

        for i in range(1, min(zero,limit)+1):
            dp0[i][0] = 1

        for j in range(1, min(one,limit)+1):
            dp1[0][j] = 1

        for i in range(1, zero+1):
            for j in range(1, one+1):

                dp0[i][j] = (dp0[i-1][j] + dp1[i-1]
                if i-limit-1 >= 0:
                    dp0[i][j] = (dp0[i][j] - dp1

                dp1[i][j] = (dp0[i][j-1] + dp1[i]
                if j-limit-1 >= 0:
                    dp1[i][j] = (dp1[i][j] - dp0[i]
[j]) % MOD
[i-limit-1][j]) % MOD
[j-1]) % MOD
[j-limit-1]) % MOD

        return (dp0[zero][one] + dp1[zero][one]) % MOD
        
class Solution:
    def numberOfStableArrays(self, zero, one, limit):

