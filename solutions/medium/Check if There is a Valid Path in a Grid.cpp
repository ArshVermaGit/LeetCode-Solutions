// Title: Check if There is a Valid Path in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/

                    if(dfs(nx,ny,g,vis)) return true;
                }
            }
        }
        return false;
    }
    bool hasValidPath(vector<vector<int>>& g) {
        int m=g.size(), n=g[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        return dfs(0,0,g,vis);
    }
};
