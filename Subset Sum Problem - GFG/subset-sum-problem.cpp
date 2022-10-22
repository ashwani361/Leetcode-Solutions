//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>v, int m){
        int n = v.size();
        
        vector<vector<bool>>dp(n+1, vector<bool>(m+1, true));
        
        for(int j=1; j<=m; j++){
            dp[0][j] = false;
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(j>=v[i-1]){
                    dp[i][j] = dp[i-1][j] or dp[i-1][j-v[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends