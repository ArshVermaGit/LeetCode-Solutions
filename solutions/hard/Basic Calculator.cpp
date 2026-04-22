// Title: Basic Calculator
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/basic-calculator/

            
            else if(c=='('){
                st.push(ans);
                st.push(sign);
                
                ans=0;
                ans+=sign*num;
                num=0;
                sign=-1;
            }
            }
            
            else if(c=='-'){
                sign=1;
            }
            
            else if(c==')'){
                ans+=sign*num;
                num=0;
                
                ans*=st.top();
                st.pop();
                
                ans+=st.top();
                st.pop();
            }
        }
        
        ans+=sign*num;
        
        return (int)ans;
    }
};
