class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 0; i < nums.size(); i++){
            int diff = abs(ans - 0);
            int curr = abs(nums[i] - 0);
            if(curr < diff){
                ans = nums[i];
            }
            if(curr == diff){
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};