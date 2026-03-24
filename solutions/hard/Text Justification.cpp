// Title: Text Justification
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/text-justification/

            
            int gaps=j-i-1;
            string line="";
            
            if(j==n || gaps==0){
                for(int k=i;k<j;k++){
                    line+=words[k];
                    if(k<j-1) line+=" ";
                }
                
                line+=string(maxWidth-line.size(),' ');
            }
            else{
                int spaces=(maxWidth-len)/gaps;
                int extra=(maxWidth-len)%gaps;
                
                for(int k=i;k<j;k++){
                    line+=words[k];
                    
                    if(k<j-1){
                        line+=string(spaces+(extra>0),' ');
                        extra--;
                    }
                }
            }
            
            ans.push_back(line);
            i=j;
        }
        
        return ans;
    }
};
