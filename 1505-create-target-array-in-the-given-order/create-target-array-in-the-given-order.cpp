class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i = 0; i<index.size(); i++){
            int num = index[i];
            int val = nums[i];
            target.insert(target.begin()+num,val);
        }

        return target;
    }
};