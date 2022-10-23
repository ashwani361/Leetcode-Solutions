class Solution {
public:
    bool ispal(string s, int i, int j){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
    
    void find(int ind, string& s, vector<string>& ds, vector<vector<string>>& ans){
        
        if(ind == s.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind; i<s.size(); i++){
            if(ispal(s, ind, i)){
                ds.push_back(s.substr(ind, i-ind+1));
                find(i+1, s, ds, ans);
                ds.pop_back();
            }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        
        find(0, s, ds, ans);
        return ans;
    }
};