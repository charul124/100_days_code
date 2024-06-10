class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        int n = heights.size();
        vector<int> arr(n);
        for(int i = 0; i < n; i ++){
            arr[i] = heights[i];
        }
        sort(heights.begin(), heights.end());
        for(int i = 0; i < n; i ++){
            if(arr[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
};