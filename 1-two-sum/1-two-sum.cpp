class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n = v.size();
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(mp.find(t-v[i])!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[t-v[i]]);
                return ans;
            }
            else{
                mp[v[i]] = i;
            }
        }
        return ans;
    }
};