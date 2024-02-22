class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> right(n);
        vector<int> left(n);
        vector<int> ans(n);
        

        for(int i=1; i<n; i++){
            right[0] = 1;
            right[i] = right[i-1]*nums[i-1];
        }
        for(int j=n-2;j>=0; j--){
            left[n-1] = 1;
            left[j] = left[j+1]*nums[j+1];
        }
        for(int k =0; k<n; k++){
            ans[k]= right[k]*left[k];
        }
        return ans;
    }
};