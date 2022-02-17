class Solution {
public:
    
    void find(int ind, int t, vector<int>& v, vector<vector<int>> &ans, vector<int>& ds){
        if(ind==v.size()){
            if(t==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(v[ind]<=t){
            ds.push_back(v[ind]);
            find(ind, t-v[ind], v, ans, ds);
            ds.pop_back();
        }
        find(ind+1, t, v, ans, ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        vector<vector<int>> ans;
        vector<int>ds;
        find(0, t, v, ans, ds);
        return ans;
    }
};