class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> answer;
        int ans;
        for(int i=0; i< points.size(); i++){
            for(int j=0; j<points[i].size(); j++){
                answer.push_back(points[i][0]);
            }
        }
        sort(answer.begin(), answer.end());
        vector<int> flag;
        for(int i =0; i< answer.size(); i++){
            for(int j= i+1; j<answer.size(); j++){
                ans = answer[j]-answer[i];
                flag.push_back(ans);
                break;
            }
            ans = 0;
        }
        int num = *max_element(flag.begin(), flag.end());
        return num;
    }
};