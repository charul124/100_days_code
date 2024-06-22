//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        int n = sentence.size();
       stringstream ss(sentence);
       string word;
       long long int maxi = -1;
       while(ss >> word){
           if(word[0]>='1' && word[word.size() - 1] <='8'){
               bool c = 0;
               for(int i = 0;i < word.size(); i++){
                   if(word[i] == '9') c = 1;
               }
               if(!c) {
                   long long d = stoll(word);
                   if(d > maxi) maxi = d;
               }
           }
       }
       return maxi;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends