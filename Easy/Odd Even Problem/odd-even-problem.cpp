//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    string oddEven(string s) {
        int x = 0, y = 0;
        unordered_map<char, int> freqMap;
        
    
        for(char c : s) {
            freqMap[c]++;
        }
        
        for(auto& pair : freqMap) {
            char c = pair.first;
            int freq = pair.second;
            int pos = (c - 'a' + 1);
            
            if (pos % 2 == 0 && freq % 2 == 0) {
                x++;
            } else if (pos % 2 != 0 && freq % 2 != 0) {
                y++;
            }
        }
        
        // Determine if the sum of x and y is even or odd
        return ((x + y) % 2 == 0) ? "EVEN" : "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends