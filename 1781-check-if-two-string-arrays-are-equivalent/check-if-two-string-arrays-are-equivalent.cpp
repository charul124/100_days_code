class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one;
        string two;
        for(int i =0; i<word1.size(); i++){
            one = one +  word1[i];
        }
        for(int j=0; j<word2.size(); j++){
            two = two+word2[j];
        }
        
        return one == two;
    }
};