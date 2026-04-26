// Title: Detect Cycles in 2D Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/detect-cycles-in-2d-grid/

                if(i + 1 < m && grid[i][j] == grid[i+1][j]) {
                    if(unite(id, (i+1)*n + j, parent)) return true;
                }
                
                if(j + 1 < n && grid[i][j] == grid[i][j+1]) {
                    if(unite(id, i*n + j+1, parent)) return true;
                }
            }
        }
        return false;
    }
};
