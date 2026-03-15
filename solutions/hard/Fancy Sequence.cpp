// Title: Fancy Sequence
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/fancy-sequence/

    Fancy() {}

    void append(int val) {
        long long inv = modPow(mul, MOD 
        long long x = ((val - add + MOD) 
- 2);
% MOD * inv) % MOD;
        arr.push_back(x);
    }

    void addAll(int inc) {
        add = (add + inc) % MOD;
    }

    void multAll(int m) {
        mul = (mul * m) % MOD;
        add = (add * m) % MOD;
    }

    int getIndex(int idx) {
        if(idx >= arr.size()) return -1;
        return (arr[idx] * mul % MOD + 
add) % MOD;
    }
};
