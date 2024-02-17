class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int N=numRows;

    vector<vector<int>> ans;
    for(int i=0; i<N; i++)
    {
        ans.push_back(vector<int>());
        ans[i].push_back(1);
    }
    for(int i=1; i<N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i==j)
              ans[i].push_back(1);
            
            else
              ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
        }
    }
    return ans;
    }
};