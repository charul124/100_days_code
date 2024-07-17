class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // brute force
        int buy = prices[0];
        int profit  = 0;
        for(int i = 0; i < prices.size(); i++){
            if(buy > prices[i]){
                buy = prices[i];
            }
            profit = max(profit, prices[i]- buy);
        }
        return profit;
    }
};