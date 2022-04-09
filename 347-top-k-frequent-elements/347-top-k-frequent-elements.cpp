class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        vector<int>ans;
        map<int, int>mp;
        int n = v.size();
        
        for(int i=0; i<n; i++){
            mp[v[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(auto it:mp){
            pq.push({it.second, it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};