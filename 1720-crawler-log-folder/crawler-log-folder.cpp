class Solution {
public:
    int minOperations(vector<string>& logs) {
        int x = 0;
        vector<int> ans;
        for(int i = 0; i < logs.size(); i++){
            int y = count(logs[i].begin(), logs[i].end(), '.');
            if(x != 0 && y == 2){
                x = x-1;
            }
            if(y == 0){
                x = x+1;
            }
            if(y == 1){
                x = x;
            }
        }
        if(x < 1){
            x = 0;
        }
        return x;
    }
};