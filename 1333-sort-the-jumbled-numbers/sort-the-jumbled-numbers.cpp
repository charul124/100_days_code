class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> vec;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            string s=to_string(num);
            string n="";
            for(int j=0;j<s.size();j++)
                n+=to_string(mapping[s[j]-'0']);
            num=stoi(n);
            vec.push_back({num,i});
        }
        sort(vec.begin(),vec.end());
        vector<int> ans;
        for(auto it:vec)
            ans.push_back(nums[it.second]);
        return ans;
    }
};