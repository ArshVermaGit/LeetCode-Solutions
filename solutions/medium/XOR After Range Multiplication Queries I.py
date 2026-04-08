// Title: XOR After Range Multiplication Queries I
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/

class Solution:
    def xorAfterQueries(self, nums, queries):
        MOD = 10**9 + 7
        
        for l, r, k, v in queries:
            idx = l
            while idx <= r:
                nums[idx] = (nums[idx] * v) % 
MOD
                idx += k
        
        ans = 0
        for x in nums:
            ans ^= x
        
        return ans
