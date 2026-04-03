// Title: Maximum Walls Destroyed by Robots
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-walls-destroyed-by-robots/

                    walls.begin();
            }
robotsToDistance[robots[i]]) -
            pos2 = lower_bound(walls.begin(), 
walls.end(), robots[i]) -
                   walls.begin();
            right[i] = rightPos - pos2;
            if (i == 0) {
                continue;
            }
            pos3 = lower_bound(walls.begin(), 
walls.end(), robots[i - 1]) -
                   walls.begin();
            num[i] = pos1 - pos3;
        }
        int subLeft, subRight, currentLeft, 
currentRight;
        subLeft = left[0];
        subRight = right[0];
        for (int i = 1; i < n; i++) {
            currentLeft =
                max(subLeft + left[i], subRight 
- right[i - 1] +
                                           min
(left[i] + right[i - 1], num[i]));
            currentRight = max(subLeft + right
[i], subRight + right[i]);
            subLeft = currentLeft;
            subRight = currentRight;
        }
        return max(subLeft, subRight);
    }
};
