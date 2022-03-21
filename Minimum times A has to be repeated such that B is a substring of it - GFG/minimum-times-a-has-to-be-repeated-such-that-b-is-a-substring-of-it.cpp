// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool pre_check(string a,string b,int n,int m){
       bool vis1[26] = {false};
       bool vis2[26] = {false};
       
       for(int i = 0; i < n; i++){
           vis1[a[i]-'a'] = true;
       }
     
     for(int i = 0; i < m; i++){
          vis2[b[i]-'a'] = true;
       }
     
     for(int i = 0; i < 26; i++){
         if((vis1[i] && !vis2[i]) || (!vis1[i] && vis2[i])) return    (false);
       }
         return (true);
    }
       
   int minRepeats(string A, string B) {
       int n = A.length(), m = B.length();
       if(!pre_check(A,B,n,m)) return (-1);
       
       int cnt = m / n;
       string a{};
       for(int i = 1; i <= cnt; i++){
           a += A;
       }
       
       int size = a.length();
       while(a.length() <= 2*size){
           if(a.find(B) != -1) return (cnt);
           cnt++;
           a += A;
       }
       
       return (-1);
   }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends