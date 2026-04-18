// Title: Mirror Distance of an Integer
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/mirror-distance-of-an-integer/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        int x = n, rev = 0;
        while(x){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return abs(n - rev);
    }
};
