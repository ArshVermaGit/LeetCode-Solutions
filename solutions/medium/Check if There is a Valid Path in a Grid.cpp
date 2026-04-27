// Title: Check if There is a Valid Path in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/

                    if(ni<0||nj<0||ni>=m||nj>=n) continue;
                    for(auto &back:d[g[ni][nj]]){
                        if(ni+back[0]==i && nj+back[1]==j){
                            unite(i*n+j,ni*n+nj);
                        }
                    }
                }
            }
        }
        return find(0)==find(m*n-1);
    }
};
