class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> right(n);
        vector<int> left(n);

        for(int i=1; i<n; i++){
            right[0] = 1;
            right[i] = right[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0; i--){
            left[n-1] = 1;
            left[i] = left[i+1]*nums[i+1];
        }
        for(int i =0; i<n; i++){
            nums[i]= right[i]*left[i];
        }
        return nums;
    }
};