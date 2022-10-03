class Solution {
public:
    void find(int ind, vector<int>& v, vector<int>& ds, vector<vector<int>>& ans, int t){
        if(t==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind; i<v.size(); i++){
            if(i>ind and v[i]==v[i-1]){
                continue;
            }
            if(t<v[i]){
                break;
            }
            ds.push_back(v[i]);
            find(i+1, v, ds, ans, t-v[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int t) {
        int n = v.size();
        vector<vector<int>>ans;
        sort(v.begin(), v.end());
        vector<int>ds;
        find(0, v, ds, ans, t);
        return ans;
    }
};