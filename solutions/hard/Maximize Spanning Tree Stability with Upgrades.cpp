// Title: Maximize Spanning Tree Stability with Upgrades
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-spanning-tree-stability-with-upgrades/

                    else return false;
                }
            }
            for(auto &e:edges){
                if(e[3]) continue;
                if(e[2]>=T){
                    if(d.unite(e[0],e[1])) used++;
                }
            }
            for(auto &e:edges){
                if(e[3]) continue;
                if(e[2]<T && 2*e[2]>=T){
                    if(up>=k) break;
                    if(d.unite(e[0],e[1])){
                        used++;
                        up++;
                    }
                }
            }
            return used==n-1 && up<=k;
        };

        int lo=1,hi=mx*2,ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(can(mid)){
                ans=mid;
                lo=mid+1;
            }else hi=mid-1;
        }
        return ans;
    }
};
