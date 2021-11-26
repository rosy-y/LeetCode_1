class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buymin = INT_MAX, profit = 0;
        
        for (int i=0; i<prices.size(); i++) {
            buymin = min(buymin, prices[i]);
            profit = max(profit, prices[i]-buymin);
        }
        return profit;
    }
};
