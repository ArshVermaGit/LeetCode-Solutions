// Title: LRU Cache
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/lru-cache/

        if (mp.find(key) != mp.end()) {
            lst.erase(mp[key]);
        } else if (lst.size() == cap) {
            auto last = lst.back();
            mp.erase(last.first);
            lst.pop_back();
        }
        lst.push_front({key, value});
        mp[key] = lst.begin();
    }
};
