class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefsum = 0;
        int ans = 0;
        unordered_map<int,int> Occ;
        Occ[0] = 1;
        for(int i = 0; i < n; i++){
            prefsum = (prefsum + nums[i]%k + k)%k;
            ans += Occ[prefsum];
            Occ[prefsum] ++;
        }
        return ans;
        // This is my brute force approach
        // long long count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     long long sum = 0;
        //     for(int j = i; j < nums.size(); j++){
        //         sum += nums[j];
        //         if(sum%k == 0){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};