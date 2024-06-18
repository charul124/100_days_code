class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int maxProfit = 0;
        for(int i = 0; i < worker.size(); i++){
            int currentProfit = 0;
            for(int j = 0; j < difficulty.size(); j++){
                if(worker[i] >= difficulty[j]){
                    currentProfit = max(currentProfit, profit[j]);
                }
            }
            maxProfit += currentProfit;
        }
        return maxProfit;
    }
};