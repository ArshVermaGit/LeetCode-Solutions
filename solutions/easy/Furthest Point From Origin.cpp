// Title: Furthest Point From Origin
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/furthest-point-from-origin/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string 
        int l = 0, r = 0, u = 0;
        for(char c : moves) {
            if(c == 'L') l++;
            else if(c == 'R') r++;
            else u++;
        }
        return abs(r - l) + u;
    }
};
moves) {
