class Solution {
public:
    void find(int ind, vector<int>& v, vector<int>& ds, vector<vector<int>>& ans){
        ans.push_back(ds);
        for(int i=ind; i<v.size(); i++){
            // if(i!=ind and v[i]==v[i-1]){
            //     continue;
            // }
            ds.push_back(v[i]);
            find(i+1, v, ds, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& v) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(v.begin(), v.end());
        find(0, v, ds, ans);
        return ans;
    }
};