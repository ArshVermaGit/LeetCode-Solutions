// Title: Word Pattern
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/word-pattern/


        vector<string> words;
        string temp;

        // split string
        stringstream ss(s);
        while(ss >> temp)
            words.push_back(temp);

        if(pattern.size() != words.size())
            return false;

        unordered_map<char,string> p2w;
        unordered_map<string,char> w2p;

        for(int i=0;i<pattern.size();i++){

            char c = pattern[i];
            string w = words[i];

            if(p2w.count(c) && p2w[c] != w)
                return false;

            if(w2p.count(w) && w2p[w] != c)
                return false;

            p2w[c] = w;
            w2p[w] = c;
        }

        return true;
    }
};
