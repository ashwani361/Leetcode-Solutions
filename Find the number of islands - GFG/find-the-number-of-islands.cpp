// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int dfs(int i,int j,int r,int c,vector<vector<char>>& grid,vector<vector<int>>& visited){
         if(i<0 || i>=r || j<0 || j>=c || grid[i][j]=='0' || visited[i][j]==1) return 0;
         visited[i][j]=1;
         return 1+dfs(i+1,j,r,c,grid,visited)
                 +dfs(i-1,j,r,c,grid,visited)
                 +dfs(i,j-1,r,c,grid,visited)
                 +dfs(i,j+1,r,c,grid,visited)
                 +dfs(i-1,j+1,r,c,grid,visited)
                 +dfs(i-1,j-1,r,c,grid,visited)
                 +dfs(i+1,j+1,r,c,grid,visited)
                 +dfs(i+1,j-1,r,c,grid,visited);
   }
   int numIslands(vector<vector<char>>& grid) {
       int r=grid.size(),c=grid[0].size();
       vector<vector<int>> visited(r,vector<int>(c,0));
       int ans=0;
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               if(grid[i][j]=='1' && visited[i][j]==0){
                   dfs(i,j,r,c,grid,visited);
                   ans++;
               }
           }
       }
       return ans;
   }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends