class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) {
        int n = (int)v.size();
        int dp[1005]={0};
        dp[0] = 0;
        dp[1] = v[0];
        dp[2] = v[1];

        for(int i=3; i<=n; i++){
            dp[i] = min(dp[i-1], dp[i-2]);
            dp[i]+=v[i-1];
        }
        
        return min(dp[n-1], dp[n]);
    }
};