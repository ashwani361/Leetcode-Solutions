#define mod 1000000007
class Solution {
public:
    int findPaths(int m, int n, int maxmove, int sr, int sc) {
        vector<vector<int>>dp1(m, vector<int>(n, 0));
        dp1[sr][sc] = 1;
        int ans =0;
        for(int move=0; move<maxmove; move++){
            vector<vector<int>>dp2(m, vector<int>(n, 0));
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    int r = (j+1<n ? dp1[i][j+1] : 0);
                    int l = (j-1>=0 ? dp1[i][j-1] : 0);
                    int u = (i-1>=0 ? dp1[i-1][j] : 0);
                    int d = (i+1<m ? dp1[i+1][j] : 0);
                    
                    dp2[i][j] = (dp2[i][j]+l)%mod;
                    dp2[i][j] = (dp2[i][j]+r)%mod;
                    dp2[i][j] = (dp2[i][j]+u)%mod;
                    dp2[i][j] = (dp2[i][j]+d)%mod;
                }
            }
            
            for(int i=0; i<m; i++){
                ans = (ans+dp1[i][0])%mod;
                ans = (ans+dp1[i][n-1])%mod;
            }
            for(int i=0; i<n; i++){
                ans = (ans+dp1[0][i])%mod;
                ans = (ans+dp1[m-1][i])%mod;
            }
            swap(dp1, dp2);
        }
        return ans;
    }
};