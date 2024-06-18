//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        int d= r<<1;
        int ds = d*d;
        int cnt = 0;
        int l = 1;
        int ri = d;
        while(l < d && ri >= 1){
            if((l*l) + (ri*ri) <= ds){
                cnt += ri;
                l++;
            }
            else{
                ri--;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends