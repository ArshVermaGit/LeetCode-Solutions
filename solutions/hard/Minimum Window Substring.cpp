// Title: Minimum Window Substring
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-window-substring/

        int need=t.size();
        
        int l=0;
        int start=0;
        int minLen=INT_MAX;
        
        for(int r=0;r<s.size();r++){
            
            if(freq[s[r]]>0) need--;
            
            freq[s[r]]--;
            
            while(need==0){
                
                if(r-l+1<minLen){
                    minLen=r-l+1;
                    start=l;
                }
                
                freq[s[l]]++;
                
                if(freq[s[l]]>0) need++;
                
                l++;
            }
        }
        
        if(minLen==INT_MAX) return "";
        
        return s.substr(start,minLen);
    }
};
