class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        int dp[n+1][m+1];
        if(n==1 and m==1){
            return v[0][0]==0;
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                dp[i][j] = 0;
            }
        }
        
        // vector<int>dp(v.size()+1, vector<int>(v[0].size()+1, 0));
        bool f = true;
        if(v[0][0]==1){
            f = false;
        }
        
        for(int j=1; j<m; j++){
            if(v[0][j]==1){
                dp[0][j] = 0;
                f = false;
            }
            else{
                if(f){
                    dp[0][j] = 1;
                }
                else{
                    dp[0][j] = 0;
                }
            }
        }
        
        f = true;
        if(v[0][0]==1){
            f = false;
        }
        for(int i=1; i<n; i++){
            if(v[i][0]==1){
                dp[i][0] = 0;
                f = false;
            }
            else{
                if(f){
                    dp[i][0] = 1;
                }
                else{
                    dp[i][0] = 0;
                }
            }
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(v[i][j]){
                    dp[i][j] = 0;
                }
                else{
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                }
                
            } 
        }
        return dp[n-1][m-1];
    }
};