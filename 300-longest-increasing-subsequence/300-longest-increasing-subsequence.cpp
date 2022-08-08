class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n = v.size();
        vector<int>dp(n+1, 1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(v[i]>v[j]){
                    dp[i] = max(dp[i], 1+dp[j]);
                }
            }
        }
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};