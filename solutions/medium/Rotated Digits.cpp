// Title: Rotated Digits
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotated-digits/

        }
        return diff;
    }
    
    int rotatedDigits(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (isGood(i)) count++;
        }
        return count;
    }
};
