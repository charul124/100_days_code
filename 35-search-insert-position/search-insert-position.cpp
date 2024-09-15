class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                pos = i;
                break;
            }
            else if(nums[i] > target){
                pos = i;
                break;
            }
        }
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        else return pos;
    }
};