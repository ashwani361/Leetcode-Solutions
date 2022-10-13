class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& v) {
        int n = s.size();
        unordered_set<string>w(v.begin(), v.end());
        
        vector<vector<string>>dp(n+1, vector<string>());
        
        dp[0].push_back("");
        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                string t = s.substr(j, i-j);
                if(dp[j].size()>0 and w.find(t)!=w.end()){
                    for(string& l:dp[j]){
                        dp[i].push_back(l+(l==""?"":" ") + t);
                    }
                }
            }
        }
        return dp[n];
    }
};