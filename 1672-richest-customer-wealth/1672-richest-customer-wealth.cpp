class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int n = v.size(), m = v[0].size();
        vector<int>t(n, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                t[i] += v[i][j];
            }
        }
        int ans = 0;
        for(auto i:t){
            ans = max(ans, i);
        }
        return ans;
    }
};