class Solution {
public:
    int dp[505][505];
    int solve(vector<int>& v, int i, int j){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int ans = 0;
        
        for(int k=i+1; k<j; k++){
            ans = max(ans, solve(v, i, k) + v[i]*v[k]*v[j] + solve(v, k, j));
        }
        return dp[i][j] = ans;
    }
    int maxCoins(vector<int>& v) {
        v.insert(v.begin(), 1);
        v.push_back(1);
        int n = v.size();
        memset(dp, -1, sizeof dp);
        return solve(v, 0, n-1);
    }
};