class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        vector<vector<int>>ans;
        int n = v.size(); 
        if(k==n){
            for(int i=0; i<n; i++){
                ans.push_back(v[i]);
            }
            return ans;
        }
        else{
            // priority_queue<pair<>>pq;
            priority_queue<pair<int, pair<int, int>>>pq; 
            for(int i=0; i<n; i++){
                pq.push({v[i][0]*v[i][0] + v[i][1]*v[i][1], {v[i][0], v[i][1]}});
                if(pq.size()>k){
                    pq.pop();
                }
            }
            while(pq.size()>k){
                pq.pop();
            }
            while(pq.size()){
                vector<int>t;
                t.push_back(pq.top().second.first);
                t.push_back(pq.top().second.second);
                ans.push_back(t);
                pq.pop();
            }
            return ans;
        }
    }
};