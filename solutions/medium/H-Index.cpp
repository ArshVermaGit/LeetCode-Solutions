// Title: H-Index
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/h-index/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), 

        int h = 0;

        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] >= i + 1) {
                h = i + 1;
            } else {
                break;
            }
        }
greater<int>());

        return h;
    }
};
