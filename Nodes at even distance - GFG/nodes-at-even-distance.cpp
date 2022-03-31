// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

int dist[10001];
class Solution{
    void dfs(int v,int p,vector<int>graph[]){
        for(auto to:graph[v])
        {
            if(to==p)continue;
            dist[to]=dist[v]+1;
            dfs(to,v,graph);
        }
    }
    public:
    int countOfNodes(vector<int> graph[], int n)
    {
        if(n==1)return 0;
        dfs(1,-1,graph);
 int cnt1=0,cnt0=0;
 for(int i=1;i<=n;i++){
     if(dist[i]%2)cnt1++;
     else cnt0++;
 }
 
  return ((cnt1*(cnt1-1))/2+ (cnt0*(cnt0-1))/2);
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
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends