#include <vector>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> prefixSum(n+1, 0); // Initialize prefix sum array
        
        // Calculate prefix sum
        for(int i = 0; i < n; ++i) {
            prefixSum[i+1] = prefixSum[i] + cardPoints[i];
        }
        
        int maxScore = 0;
        // Iterate over all possibilities of picking i cards from the front and k-i from the back
        for(int i = 0; i <= k; ++i) {
            int currentScore = prefixSum[i] + (prefixSum[n] - prefixSum[n-(k-i)]);
            maxScore = max(maxScore, currentScore);
        }
        
        return maxScore;
    }
};
