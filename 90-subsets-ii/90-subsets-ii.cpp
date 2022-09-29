class Solution {
public:
        
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        int n = v.size();
        sort(v.begin(), v.end());
        
        for(int i=0; i<(1<<n); i++){
            vector<int>t;
            for(int j=0; j<n; j++){
                if(i&(1<<j)){
                    t.push_back(v[j]);
                }
            }
            
            st.insert(t);
        }
        
        for(auto it:st){
            ans.push_back(it);
        }
        
        return ans;
    }
};