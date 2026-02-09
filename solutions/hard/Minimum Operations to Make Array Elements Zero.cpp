// Title: Minimum Operations to Make Array Elements Zero
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-make-array-elements-zero/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long count_reductions(long long n) {
        if (n <= 0) return 0;
        long long total = 0;
        long long start = 1;
        long long power_of_4 = 4;
        long long cost = 1;

        while (start <= n) {
            long long end = min(n, power_of_4 - 1);
            total += (end - start + 1) * cost;
            if (power_of_4 > n) break;
            start = power_of_4;
            if (power_of_4 > 2e18 / 4) { 
                power_of_4 = n + 1; 
            } else {
                power_of_4 *= 4;
            }
            cost++;
        }
        return total;
    }

    long long minOperations(vector<vector<int>>& queries) 
{
        long long total_sum = 0;
        for (const auto& q : queries) {
