class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int> res(nums.size());
        reverse(nums.begin(), nums.end());
        for(int i = 0; i < k; i++){
            res.push_back(nums[i]);
        }
        reverse(res.begin(), res.end());        
        reverse(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            res[i+k] = nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = res[i];
        }
    }
};