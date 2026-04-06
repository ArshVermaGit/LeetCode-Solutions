// Title: Walking Robot Simulation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/walking-robot-simulation/

using namespace std;

class Solution {
public:
    int robotSim(vector<int>& commands, 
vector<vector<int>>& obstacles) {
        unordered_set<long long> s;
        for(auto &o:obstacles)
            s.insert(((long long)o[0]<<32) ^ (o
[1] & 0xffffffff));

        int x=0,y=0,dir=0;
        int dx[4]={0,1,0,-1};
        int dy[4]={1,0,-1,0};
        int ans=0;

        for(int c:commands){
            if(c==-2) dir=(dir+3)%4;
            else if(c==-1) dir=(dir+1)%4;
            else{
                while(c--){
                    int nx=x+dx[dir], ny=y+dy
[dir];
                    if(s.count(((long long)
nx<<32) ^ (ny & 0xffffffff))) break;
                    x=nx; y=ny;
                    ans=max(ans,x*x+y*y);
                }
            }
        }
        return ans;
    }
};
