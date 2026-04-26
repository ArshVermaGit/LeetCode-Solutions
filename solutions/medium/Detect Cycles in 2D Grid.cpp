// Title: Detect Cycles in 2D Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/detect-cycles-in-2d-grid/

                            vis[nx][ny] = 1;
                            q.push({nx, ny, x, y});
                        } else if(nx != px || ny != py) {
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};
