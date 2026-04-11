// Title: Minimum Distance Between Three Equal Elements II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int ans = INT_MAX;
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
            auto &v = mp[nums[i]];
            int m = v.size();
            
            if(m >= 3){
                ans = min(ans, 2 * (v[m-1] - v
            }
        }
        
[m-3]));
        return ans == INT_MAX ? -1 : ans;
    }
};
