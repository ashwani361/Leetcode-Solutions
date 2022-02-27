// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
       int res = INT_MAX;
       vector<int> a(3,-1);
       for(int i = 0;i<S.size();i++){
           a[S[i]-'0'] = i;
           if(a[0] != -1 && a[1] != -1 && a[2] != -1){
               res = min(res,*max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()));
           }
       }
       return (res == INT_MAX)? -1 : res+1;
   }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends