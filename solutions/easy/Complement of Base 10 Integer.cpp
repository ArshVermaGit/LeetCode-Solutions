// Title: Complement of Base 10 Integer
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int mask = 0, temp = n;
        while(temp){
            mask = (mask << 1) | 1;
            temp >>= 1;
        }
        return mask ^ n;
    }
};
