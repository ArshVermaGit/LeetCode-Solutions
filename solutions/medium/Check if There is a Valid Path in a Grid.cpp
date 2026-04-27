// Title: Check if There is a Valid Path in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/

                if(nx<0||ny<0||nx>=m||ny>=n||vis[nx][ny]) continue;
                for(auto &back:d[g[nx][ny]]){
                    if(nx+back[0]==x && ny+back[1]==y){
                        vis[nx][ny]=true;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return false;
    }
};
