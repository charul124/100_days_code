class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr(encoded.size()+1);
        for(int i =0; i<encoded.size();i++){
            arr[0] = first;
            arr[i+1] = encoded[i]^arr[i]; 
        }
        return arr;
    }
};