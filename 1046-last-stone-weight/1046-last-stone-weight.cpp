class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int>pq;
        int n = v.size();
        if(n==1){
            return v[0];
        }
        else{
            for(int i=0; i<n; i++){
                pq.push(v[i]);
            }
            while(pq.size()>1){
                int x = pq.top();
                pq.pop();
                int y = pq.top();
                pq.pop();
                if(x!=y){
                    pq.push(max(x, y) - min(x, y));
                }
            }
            if(pq.size()==2){
                int x = pq.top();
                pq.pop();
                int y = pq.top();
                pq.pop();
                if(x==y){
                    return 0;
                }
                else{
                    return (max(x, y) - min(x, y));
                }
            }
            else if(pq.size()==1){
                return pq.top();
            }
        }
        return 0;
    }
};