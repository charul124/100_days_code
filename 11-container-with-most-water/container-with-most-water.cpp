class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = nums.size()-1;
        int maxi = -1;
        while(i < j){
            maxi = max((min(nums[i], nums[j]))*(j-i), maxi);
            if(nums[i] <= nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};