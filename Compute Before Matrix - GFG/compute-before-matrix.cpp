// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // vector<vector<int>> computeBeforeMatrix(int n, int m, vector<vector<int>> v){
    //     vector<vector<int>>ans;
    //     for(int i=0; i<n; i++){
    //         vector<int>t;
    //         for(int j=0; j<m; j++){
    //             if(i==0 and j==0){
    //                 t.push_back(v[i][j]);
    //             }
    //             else if(j==0){
    //                 t.push_back(v[i][j]-v[i][j-1]);
    //             }
    //             else if(i==0){
    //                 t.push_back(v[i][j]-v[i-1][j]);
    //             }
    //             else{
    //                 t.push_back(v[i][j]-v[i-1][j]-v[i][j-1]+v[i-1][j-1]);
    //             }
    //         }
    //         ans.push_back(t);
    //     }
    //     return ans;
    // }
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after){
        int arr[N] = {0};
        for(int i = 0; i < M; i++){
            int curr = 0;
            for(int j = 0; j < N; j++){
                curr += arr[j];
                after[j][i] -= curr;
                arr[j] += after[j][i];
                curr += after[j][i]; 
            }
        }
        return after;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M; 
        vector<vector<int>> after(N,vector<int>(M));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>after[i][j];
            }
        } 
        Solution obj;
        vector<vector<int>> before=obj.computeBeforeMatrix(N,M,after); 
        for(int i=0;i<before.size();i++){
            for(int j=0;j<before[i].size();j++){
                cout<<before[i][j]<<' ';
            } 
            cout<<endl;
        }
    }
}  // } Driver Code Ends