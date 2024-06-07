//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
    public:
    long max_sum(int a[], int n) {
        // Your code here
        long max_sum = 0;
        long sum = 0;
        
        for(int i =0;i<n;i++){
            sum += (long)a[i];
            max_sum += (long)a[i]*i;
        }
        long curr = max_sum;
        for(int i =1;i<n;i++){
            curr = curr+(sum-n*(long)a[n-i]);
            
            max_sum = max(curr,max_sum);
        }
        return max_sum;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends