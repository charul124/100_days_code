class Solution {
public:
    void sortColors(vector<int>& a) {
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 0){
                c0++;
            }
            else if(a[i] == 1){
                c1++;
            }
            else{
                c2++;
            }
        }
        for(int i =0; i< c0; i++){
            a[i] = 0;
        }
        for(int i = c0; i < c0+c1; i++){
            a[i] = 1;
        }
        for(int i = c0+c1; i < a.size(); i++){
            a[i] = 2;
        }
    }
};