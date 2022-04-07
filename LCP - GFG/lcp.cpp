// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
   {
       // code here
       sort(ar,ar+n);
       string s1=ar[0];
       string s2=ar[n-1];
       string ans="";
       for(int i=0;i<ar[0].size();i++){
           if(s1[i]==s2[i])
           ans+=s1[i];
           else
           break;
       }
       if(ans=="")
       return "-1";
       return ans;
   }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends