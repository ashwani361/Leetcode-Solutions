class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& v) {
        // unordered_map<int, int>mp;
        vector<int>mp(60, 0);
        int ans =0;
        for(auto t:v){
            ans+=mp[(60 - t%60)%60];
            mp[t%60]++;
        }
        return ans;
    }
};