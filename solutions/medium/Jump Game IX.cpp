// Title: Jump Game IX
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/jump-game-ix/


        segMax = nums[start];

        for (int i = start; i < n; ++i)
            segMax = max(segMax, nums[i]);

        for (int i = start; i < n; ++i)
            ans[i] = segMax;

        return ans;
    }
};
