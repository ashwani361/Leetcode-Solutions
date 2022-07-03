class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        int n = v.size();
        vector<vector<int>>ans;
        sort(v.begin(), v.end());
        auto f = v[0];
        
        if(n==1){
            return v;
        }
        else{
            
            for(int i=1; i<n; i++){
                if(v[i][0]<=f[1]){
                    f[1] = max(v[i][1], f[1]);
                }
                else{
                    ans.push_back(f);
                    f = v[i];
                }
            }
        }
        ans.push_back(f);
        return ans;
    }
};