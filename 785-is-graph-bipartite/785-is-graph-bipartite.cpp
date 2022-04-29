class Solution {
public:
    bool isBipartite(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int>color(n, -1);
        
        for(int i=0; i<n; i++){
            if(color[i]!=-1){
                continue;
            }
            else{
                queue<int>q;
                q.push(i);
                color[i] = 1;
                
                while(q.size()){
                    auto t = q.front();
                    q.pop();
                    
                    for(auto it:adj[t]){
                        
                        if(color[it]==-1){
                            q.push(it);
                            color[it] = color[t]^1;
                        }
                        else if(color[it]==color[t]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};