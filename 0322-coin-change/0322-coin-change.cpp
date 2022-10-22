class Solution {
public:
    int coinChange(vector<int>& v, int m) {
        int n = v.size();
        
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        
        for(int j=1; j<=m; j++){
            dp[0][j] = 1e5;
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(j>=v[i-1]){
                    dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-v[i-1]]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        if(dp[n][m]==1e5){
            return -1;
        }
        return dp[n][m];
    }
};