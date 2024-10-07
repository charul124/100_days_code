class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        //tc is O(n+klogn)
        priority_queue<int> maxheap;
        for(int i = 0; i < piles.size(); i++){
            maxheap.push(piles[i]);
        }

        while(k--){
            int maxele = maxheap.top();
            maxheap.pop();
            maxele = maxele - floor(maxele/2);
            maxheap.push(maxele);
        }
        int sum = 0;
        while(!maxheap.empty()){
            int temp = maxheap.top();
            maxheap.pop();
            sum += temp;
        }
        return sum;
    }
};