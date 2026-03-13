// Title: Minimum Number of Seconds to Make Mountain Height Zero
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-number-of-seconds-to-make-mountain-height-zero/

using namespace std;

class Solution {
public:
    long long calc(long long T, int w){
        long long v = (2*T)/w;
        long long x = (sqrt(1+4.0*v)-1)/2;
        while((long long)w*x*(x+1)/2 > T) x--;
        return x;
    }
    
    long long minNumberOfSeconds(int mountainHeight, 
vector<int>& workerTimes) {
        long long l=0,r=1e18,ans=r;
        
        while(l<=r){
            long long mid=(l+r)/2;
            long long h=0;
            
            for(int w:workerTimes){
                h+=calc(mid,w);
                if(h>=mountainHeight) break;
            }
            
            if(h>=mountainHeight){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }
        
        return ans;
    }
};
