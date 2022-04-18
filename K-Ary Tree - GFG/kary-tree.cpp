// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
#define ll long long
#define mod 1000000007
class Solution {
  public:
    ll power(int a,int b){
        if(b==0)    return 1;
        ll x=power(a,b/2);
        ll ans=1;
        if(b%2==1){
            ans=((x%mod)*(x%mod))%mod;
            ans=((ans%mod)*(a%mod))%mod;
        }
        else
            ans=((x%mod)*(x%mod))%mod;
        
        return ans;
    }
    
    
    long long karyTree(int k, int m) {
        return power(k,m);
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}  // } Driver Code Ends