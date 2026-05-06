// Title: Rotating the Box
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotating-the-box/

                if (res[i][j] == '*') {
                    empty = i - 1;
                } else if (res[i][j] == '#') {
                    swap(res[i][j], res[empty][j]);
                    empty--;
                }
            }
        }

        return res;
    }
};
