#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    bool canFormPairs(std::vector<int>& nums, int p, int maxDiff) {
        int count = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i + 1] - nums[i] <= maxDiff) {
                count++;
                i++; // Skip the next element as it's paired with the current one.
            }
            if (count >= p) return true;
        }
        return count >= p;
    }

    int minimizeMax(std::vector<int>& nums, int p) {
        std::sort(nums.begin(), nums.end());
        int left = 0, right = nums.back() - nums.front(), res = INT_MAX;

        while (left <= right) {
            long long mid = (left + right) / 2;
            if (canFormPairs(nums, p, mid)) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return res;
    }
};
