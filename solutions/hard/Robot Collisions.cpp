// Title: Robot Collisions
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/robot-collisions/

            }
            else{
                while(!st.empty() && healths[id]
>0){
                    int j = st.top();
                    
                    if(healths[j] < healths[id])
{
                        st.pop();
                        healths[id]--;
                        healths[j]=0;
                    }
                    else if(healths[j] > healths
[id]){
                        healths[j]--;
                        healths[id]=0;
                    }
                    else{
                        st.pop();
                        healths[id]=0;
                        healths[j]=0;
                    }
                }
            }
        }
        
        vector<int> ans;
        for(int i=0;i<n;i++)
            if(healths[i]>0)
                ans.push_back(healths[i]);
        
        return ans;
    }
};
