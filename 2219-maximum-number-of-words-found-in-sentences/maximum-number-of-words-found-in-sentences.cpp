class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> ans;
        int max = 0;
        for(int i =0; i<sentences.size();i++){
            int count =1;
            for(int j=0; j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            ans.push_back(count);
        }
        max = *max_element(ans.begin(), ans.end());
        return max;
    }
};