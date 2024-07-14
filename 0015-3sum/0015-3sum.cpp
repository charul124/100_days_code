class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ansSet;  // Using a set to avoid duplicate triplets
        sort(nums.begin(), nums.end());  // Sorting the input array
        
        for (int i = 0; i < nums.size(); i++) {
            int target = -nums[i];  // Calculating the target sum
            int left = i + 1, right = nums.size() - 1;  // Initializing two pointers
            
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    ansSet.insert({nums[i], nums[left], nums[right]});  // Adding unique triplet
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        vector<vector<int>> ans(ansSet.begin(), ansSet.end());  // Converting set to vector
        return ans;
    }
};
