class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = 0;
        int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (n >= nums.size() - 1) {
            return true;
        }
        sum = max(sum, i + nums[i]);
        if (i == n) {
            if (sum <= n) {
                return false;
            }
            n = sum;
        }
    }
    return false;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     i = i + nums[i];
        //     if(i == n-1){
        //         return true;
        //     }
        //     if(i > n-1){
        //         return  true;
        //     }
        // }
        // return false;
    }
};