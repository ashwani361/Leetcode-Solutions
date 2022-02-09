class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        unordered_map<int, int>mp;
        set<pair<int, int>>s;
        for(int i=0; i<v.size(); i++){
            if(mp.find(v[i]+k)!=mp.end()){
                s.insert(make_pair(v[i], v[i]+k));
            }
            if(mp.find(v[i]-k)!=mp.end()){
                s.insert(make_pair(v[i]-k, v[i]));
            }
            mp[v[i]]++;
        }
        return s.size();
    }
};