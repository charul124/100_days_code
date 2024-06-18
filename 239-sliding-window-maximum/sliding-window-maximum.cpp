class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        // traversing the first window
        for(int i = 0 ; i < k; i++){
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // peheli window ka answer 
        ans.push_back(nums[dq.front()]);

        for(int i = k; i < nums.size(); i++){
            // removinf out of window element
            if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }
            // current element k liye chote element s ko remove krna hai
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);

            ans.push_back(nums[dq.front()]);

        }
        return ans;
    }
};