class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum = customers[0][1];
        int num = customers[0][0] + customers[0][1];
        for(int i = 1; i < customers.size(); i++){
            if(num > customers[i][0]){
                sum += (num + customers[i][1]) - customers[i][0];
                num += customers[i][1];
            }
            else{
                sum += (customers[i][0] + customers[i][1]) - customers[i][0];
                num += customers[i][0] - num + customers[i][1];
            }
        }
        return sum/customers.size();
    }
};