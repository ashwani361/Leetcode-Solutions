class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> m;
        for (auto &t : trips){
            m[t[1]] += t[0], m[t[2]] -= t[0];
        }
        
        int res=0;
        for (auto &v : m){
            res+=v.second;
            if(res>capacity){
                return false;
            }
        }
        return true;
    }
};