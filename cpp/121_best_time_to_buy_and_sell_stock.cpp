class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minx = prices[0];
        int profit = 0;

        for (auto p : prices) {
            profit = max(profit, p-minx); 
            minx = min(minx, p);
        }

        return profit; 
    }
};