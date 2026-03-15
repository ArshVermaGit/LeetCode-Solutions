// Title: Best Time to Buy and Sell Stock
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0], profit = 0;
        
        for(int i = 1; i < prices.size(); i++){
            mn = min(mn, prices[i]);
            profit = max(profit, prices[i] - mn);
        }
        
        return profit;
    }
};
