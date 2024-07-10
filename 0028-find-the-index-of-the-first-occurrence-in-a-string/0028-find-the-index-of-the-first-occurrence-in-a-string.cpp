class Solution {
public:
    int strStr(string haystack, string needle) {
        int num = haystack.find(needle);
        if(num > -1){
            return num;
        }
        return -1;
    }
};