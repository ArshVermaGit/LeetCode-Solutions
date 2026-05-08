// Title: Minimum Jumps to Reach End via Prime Teleportation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/

                for (int nxt : divs[nums[i]]) {
                    if (dist[nxt] == -1) {
                        dist[nxt] = dist[i] + 1;
                        q.push(nxt);
                    }
                }
            }
        }

        return -1;
    }
};
