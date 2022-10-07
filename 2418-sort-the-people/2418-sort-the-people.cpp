class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        int sz = n.size();
        vector<pair<int, string>>v;
        for(int i=0; i<sz; i++){
            v.push_back({h[i], n[i]});
        }
        sort(v.begin(), v.end());
        vector<string>ans;
        for(int i=0; i<sz; i++){
            ans.push_back(v[i].second);
        }
        reverse(ans.begin(), ans.end());
        // for(auto i:v){
        //     ans.push_back(i.first);
        // }
        return ans;
    }
};