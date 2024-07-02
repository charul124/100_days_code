class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> map1;
        
        // Populate the map with counts of elements in nums1
        for (int num : nums1) {
            map1[num]++;
        }
        
        // Find intersections and decrease the count in the map
        for (int num : nums2) {
            if (map1[num] > 0) {
                ans.push_back(num);
                map1[num]--;
            }
        }
        
        return ans;
    }
};
