class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        for(int i = 0 ;i < arr.size(); i++){
            map[arr[i]]++;
        }
        unordered_set<int> occurrenceSet; 
        for(auto x : map){ 
            if(occurrenceSet.find(x.second) != occurrenceSet.end()){ 
                return false; 
            } 
            occurrenceSet.insert(x.second); 
        } 
        return true;
    }
};