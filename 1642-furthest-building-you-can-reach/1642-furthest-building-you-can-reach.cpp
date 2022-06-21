class Solution {
public:
    int furthestBuilding(vector<int>& v, int b, int l) {
        priority_queue<int, vector<int>, greater<int>>pq;
        int n = v.size();
        if(n==1){
            return 0;
        }
        int sum = 0;
        for(int i=0; i<n-1; i++){
            if(v[i+1]>v[i]){
                pq.push(v[i+1]-v[i]);
            }
            if(pq.size()>l){
                sum+=pq.top();
                pq.pop();
            }
            if(sum>b){
                return i;
            }
        }
        return n-1;
    }
};