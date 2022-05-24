//link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = prices[0];
        int profit = 0;
        for(int i = 1; i < n; i++)
        {
            if(prices[i] < min_price ) min_price = prices[i];
            else
            {
                profit = max(profit, prices[i] - min_price);
            }
        }
        return profit;
    }
};
