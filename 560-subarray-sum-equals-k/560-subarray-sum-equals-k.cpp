class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int n = v.size();
        unordered_map<int, int>mp;
        int curr = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            curr+=v[i];
            if(curr==k){
                count++;
            }
            if(mp.find(curr-k)!=mp.end()){
                count+=mp[curr-k];
            }
            mp[curr]++;
        }
        return count;
    }
};