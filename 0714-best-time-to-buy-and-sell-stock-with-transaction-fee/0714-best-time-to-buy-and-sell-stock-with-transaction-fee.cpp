class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int b = -prices[0];
        int s = 0;

        for(int i = 1; i < prices.size(); i++) {
            b = max(b, s - prices[i]);
            s = max(s, b + prices[i] - fee);
        }

        return s;
    }
};