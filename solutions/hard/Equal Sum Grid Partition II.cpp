// Title: Equal Sum Grid Partition II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/equal-sum-grid-partition-ii/

            bool left=T>U;

            int w1=j+1,w2=n-j-1;

            if(m>=2 && (left?w1:w2)>=2){
                if(left && d<=MAXV && A[d]) return 
                if(!left && d<=MAXV && B[d]) return 
true;
true;
            }else{
                if(left){
                    if(m==1){
                        if(g[0][0]==d || g[0][j]==d) 
return true;
                    }else{
                        if(g[0][0]==d || g[m-1][0]
==d || g[0][j]==d || g[m-1][j]==d) return true;
                    }
                }else{
                    if(m==1){
                        if(g[0][j+1]==d || g[0][n-1]
==d) return true;
                    }else{
                        if(g[0][j+1]==d || g[m-1][j+1]
==d || g[0][n-1]==d || g[m-1][n-1]==d) return true;
                    }
                }
            }
        }

        return false;
    }
};
