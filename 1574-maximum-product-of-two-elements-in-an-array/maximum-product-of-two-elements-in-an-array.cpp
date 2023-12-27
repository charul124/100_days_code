class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i<nums.size(); i++){
            for(int j =i+1; j<nums.size(); j++){
                int n = ((nums[i]-1)*(nums[j]-1));
                ans.push_back(n);
            }
        }
        int max = *max_element (ans.begin(), ans.end());
        return max;
    }
};