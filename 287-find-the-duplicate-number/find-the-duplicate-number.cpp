class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        int ans = 0;
        for(auto &x : map){
            if(x.second >= 2){
                ans =  x.first;
                break;
            }
        }
        return ans;
    }
};