//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int v[], int n){
        int ma = INT_MIN;
        for(int i=0; i<n; i++){
            ma = max(ma, v[i]);
        }
        vector<int>a(ma+1, 0);
        for(int i=0; i<n; i++){
            a[v[i]]++;
        }
        int ans = 0;
        for(int i=ma; i>=1; i--){
            if(a[i]>0){
                while(a[i]>0){
                    if(a[i-1]>0){
                        ans+=i;
                        a[i-1]--;
                        a[i]--;
                    }
                    else{
                        ans+=i;
                        a[i]--;
                    }
                }
            }
        }
        return ans;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends