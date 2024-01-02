#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int rows = mat.size();
    int col = mat[0].size();

    
    auto customComparator = [&mat](int a, int b) {
        int onesA = count(mat[a].begin(), mat[a].end(), 1);
        int onesB = count(mat[b].begin(), mat[b].end(), 1);
        if (onesA != onesB) {
            return onesA < onesB;
        } else {
            return a < b;
        }
    };

    
    vector<int> rowIndices(rows);
    iota(rowIndices.begin(), rowIndices.end(), 0);
    sort(rowIndices.begin(), rowIndices.end(), customComparator);

    
    vector<int> result(rowIndices.begin(), rowIndices.begin() + k);

    return result;
    }
};
