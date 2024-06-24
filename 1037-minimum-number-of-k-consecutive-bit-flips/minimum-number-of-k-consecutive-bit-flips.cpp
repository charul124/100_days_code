class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans = 0;
        int flips = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if((nums[i] + flips) % 2 == 0)
            {
                if(i > nums.size() - k)
                {
                    return -1;
                }
                else
                {
                    ans++;
                    flips++;
                    nums[i] = -1;
                }
            }
            if(i + 1 >= k)
            {
                flips = flips - (nums[i - k + 1] < 0);     
            }
        }
        return ans;
    }
};