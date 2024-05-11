//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
    string res="";
    for(auto c:num){
        while(res.size()>0 and res.back()>c and k>0){
            res.pop_back();
            k--;
        }
        res+=c;
    }
    
    while(k>0 and res.size()>0){
        k--;
        res.pop_back();
    }
    
    for(int i=0;i<res.size();i++)
        if(res[i]!='0') return res.substr(i);
    
    
    return "0";
}