class Solution {
public:
   vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>> result;

    for (int value : nums) {
        bool added = false;
        bool duplicate = false;

        for (vector<int>& row : result) {
            if (find(row.begin(), row.end(), value) == row.end()) {
                row.push_back(value);
                added = true;
                duplicate = true;
            }
            if (duplicate) {
                break;
            }
        }

        if (!added) {
            result.push_back({value});
        }
    }

    return result;
}
};