class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++){
            string str = "";
            str += details[i][11];
            str += details[i][12];
            int ans = stoi(str);
            if(ans > 60){
                count++;
            }
        }
        return count;
    }
};