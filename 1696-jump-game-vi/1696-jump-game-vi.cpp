class Solution {
public:
    int maxResult(vector<int>& v, int k) {
        deque<int>d;
        int n = v.size();
        vector<int>dp(n);
        
        dp[n-1] = v[n-1];
        d.push_back(n-1);
        
        for(int i=n-2; i>=0; i--){
            while(d.front()-i>k){
                d.pop_front();
            }
            dp[i] = v[i]+dp[d.front()];
            while(d.size() and dp[d.back()]<dp[i]){
                d.pop_back();
            }
            d.push_back(i);
        }
        return dp[0];
    }
};