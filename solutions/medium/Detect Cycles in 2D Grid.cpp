// Title: Detect Cycles in 2D Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/detect-cycles-in-2d-grid/

        vis.assign(m, vector<int>(n, 0));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!vis[i][j]) {
                    if(dfs(i, j, -1, -1, grid)) return true;
                }
            }
        }
        return false;
    }
};
