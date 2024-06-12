class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> count(1001, 0);
        vector<int> ans;

        for (int num : arr1) {
            count[num]++;
        }

        for (int num : arr2) {
            while (count[num] > 0) {
                ans.push_back(num);
                count[num]--;
            }
        }

        for (int i = 0; i < 1001; i++) {
            while (count[i] > 0) {
                ans.push_back(i);
                count[i]--;
            }
        }

        return ans;
    }
};
