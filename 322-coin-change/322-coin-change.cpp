class Solution {
public:
    int coinChange(vector<int>& v, int m) {
        int n = v.size();
        int dp[n+1][m+1];
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0){
                    dp[i][j]= 1e5;
                }
                if(j==0){
                    dp[i][j] = 0;
                }
            }
        }
        dp[0][0] = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(v[i-1]<=j){
                    dp[i][j] =  min(dp[i-1][j],1 + dp[i][j-v[i-1]]);
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