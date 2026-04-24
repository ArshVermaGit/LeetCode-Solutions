// Title: Furthest Point From Origin
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/furthest-point-from-origin/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string 
moves) {
        int left = 0, right = 0;
        for(char c : moves) {
            if(c == 'L') {
                left--;
                right--;
            } else if(c == 'R') {
                left++;
                right++;
            } else {
                left--;
                right++;
            }
        }
        return max(abs(left), abs(right));
    }
};
