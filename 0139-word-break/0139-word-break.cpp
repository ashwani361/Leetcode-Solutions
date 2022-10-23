class Solution {
public:
    bool wordBreak(string s, vector<string>& v) {
        int n = s.size();
        vector<bool>dp(n+5, false);
        
        dp[0] = true;
        
        for(int i=0; i<n; i++){
            for(auto str:v){
                if(dp[i]){
                    if(str.compare(s.substr(i, str.size()))==0){
                        dp[i+str.size()] = true;
                    }
                }
            }
        }
        
        return dp[n];
    }
};