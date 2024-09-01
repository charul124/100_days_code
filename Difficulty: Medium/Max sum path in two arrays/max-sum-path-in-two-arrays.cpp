//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int func(int fp,int sp,int fidx,int        sidx,vector<int>&arr1,vector<int>&arr2){
       int ct1=0,ct2=0;
       for(int i=fp;i<=fidx;i++){
           ct1+=arr1[i];
       }
       
       for(int i=sp;i<=sidx;i++){
           ct2+=arr2[i];
       }
       return max(ct1,ct2);
    }
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]={i,-1};
        }
        vector<pair<int,pair<int,int>>>a;
        for(int i=0;i<arr2.size();i++){
            if(mp.find(arr2[i])!=mp.end()){
                a.push_back({arr2[i],{mp[arr2[i]].first,i}});
            }
        }
        mp.clear();
        sort(a.begin(),a.end());
        
        int fp=0,sp=0,total=0;
        for(auto it:a){
            int ele=it.first;
            int fidx=it.second.first;
            int sidx=it.second.second;
            int sum=func(fp,sp,fidx,sidx,arr1,arr2);
            total+=sum;
            fp=fidx+1,sp=sidx+1;
        }
        total+=func(fp,sp,arr1.size()-1,arr2.size()-1,arr1,arr2);
        return total;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long ans = ob.maxPathSum(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends