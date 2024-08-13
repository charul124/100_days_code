class Solution {
public:
    int n;
    vector<int> nums, path;
    vector<vector<int>> ans;
    
    void backtrack(int target, int start){
        if(target == 0){
            ans.push_back(path);
            return;
        }
        
        for(int i = start; i < n; i++){
            if(i > start && nums[i] == nums[i-1]) continue;  // Skip duplicates
            if(nums[i] > target) continue;
            
            path.push_back(nums[i]);
            backtrack(target - nums[i], i + 1);
            path.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        nums = candidates;
        n = candidates.size();
        backtrack(target, 0);
        
        return ans;
    }
};
