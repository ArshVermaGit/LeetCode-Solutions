// Title: Minimum Distance to Type a Word Using Two Fingers
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-distance-to-type-a-word-using-two-fingers/

    }
    
    int minimumDistance(string word) {
        int n=word.size();
        vector<vector<vector<int>>> dp(n,
vector<vector<int>>(27,vector<int>(27,1e9)));
        
        dp[0][word[0]-'A'][26]=0;
        dp[0][26][word[0]-'A']=0;
        
        for(int i=1;i<n;i++){
            int cur=word[i]-'A';
            for(int f1=0;f1<=26;f1++){
                for(int f2=0;f2<=26;f2++){
                    int val=dp[i-1][f1][f2];
                    if(val==1e9) continue;
                    
                    dp[i][cur][f2]=min(dp[i]
[cur][f2],val+dist(f1,cur));
                    dp[i][f1][cur]=min(dp[i][f1]
[cur],val+dist(f2,cur));
                }
            }
        }
        
        int ans=1e9;
        for(int i=0;i<=26;i++)
            for(int j=0;j<=26;j++)
                ans=min(ans,dp[n-1][i][j]);
        
        return ans;
    }
};
