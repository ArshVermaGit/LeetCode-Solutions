// Title: Substring with Concatenation of All Words
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/substring-with-concatenation-of-all-words/

                    window[word]++;
                    count++;
                    
                    while(window[word]>mp[word])
                        string leftWord=s.substr
                        window[leftWord]--;
                        left+=k;
{
(left,k);
                        count--;
                    }
                    
                    if(count==m){
                        ans.push_back(left);
                        
                        string leftWord=s.substr
(left,k);
                        window[leftWord]--;
                        left+=k;
                        count--;
                    }
                }
                else{
                    window.clear();
                    count=0;
                    left=right+k;
                }
            }
        }
        
        return ans;
    }
};
