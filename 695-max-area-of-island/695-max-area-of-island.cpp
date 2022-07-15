class Solution {
public:
    
    bool isval(int i, int j, vector<vector<int>>& v){
        return (i>=0 and i<v.size() and j>=0 and j<v[0].size());
    }
    int dfs(int i, int j, vector<vector<int>>& v){
        v[i][j]=0;
        int c = 1;
        if(isval(i+1,j,v) and v[i+1][j]==1){
            c+=dfs(i+1, j, v);
        }
        if(isval(i-1,j,v) and v[i-1][j]==1){
            c+=dfs(i-1, j, v);
        }
        if(isval(i,j+1,v) and v[i][j+1]==1){
            c+=dfs(i, j+1, v);
        }
        if(isval(i,j-1,v) and v[i][j-1]==1){
            c+=dfs(i, j-1, v);
        }
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        int ma = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==1){
                     ma = max(ma, dfs(i,j,v));
                }
            }
        }
        return ma;
    }
};