// Title: Game of Life
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/game-of-life/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
{
        int m=board.size(), n=board[0].size();
        vector<vector<int>> copy=board;

        int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int live=0;
                for(int d=0;d<8;d++){
                    int ni=i+dx[d], nj=j+dy[d];
                    if(ni>=0&&nj>=0&&ni<m&&
nj<n&&copy[ni][nj]==1)
                        live++;
                }

                if(copy[i][j]==1){
                    if(live<2||live>3) board[i]
[j]=0;
                }
                else{
                    if(live==3) board[i][j]=1;
                }
            }
        }
    }
};
