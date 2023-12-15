class Solution {
public:
     vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        vector<int> right(n,0);
        vector<int> left;
        int sum =0;
        left.push_back(0);
        sum += nums[0];
        
        for(int i=1;i<n;i++){
            left.push_back(sum);
            sum+=nums[i];
        }
        sum = 0;
        right[n-1]=0;
        sum+=nums[n-1];
        for(int j=n-2;j>=0;j--){
            right[j]=sum;
            sum+=nums[j];
        }
        for(int k = 0; k<n; k++){
            ans[k]=abs(left[k]-right[k]); 
        }
        return ans;
    }
};