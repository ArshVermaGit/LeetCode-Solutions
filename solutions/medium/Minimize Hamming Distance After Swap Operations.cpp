// Title: Minimize Hamming Distance After Swap Operations
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimize-hamming-distance-after-swap-operations/

    int minimumHammingDistance(vector<int>& 
source, vector<int>& target, 
vector<vector<int>>& allowedSwaps) {
        int n=source.size();
        
        parent.resize(n);
        rankv.assign(n,0);
        
        for(int i=0;i<n;i++) parent[i]=i;
        
        for(auto &e:allowedSwaps)
            unite(e[0],e[1]);
        
        unordered_map<int, unordered_map<int,
int>> mp;
        
        for(int i=0;i<n;i++)
            mp[findp(i)][source[i]]++;
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            int p=findp(i);
            
            if(mp[p][target[i]]>0)
                mp[p][target[i]]--;
            else
                ans++;
        }
        
        return ans;
    }
};
