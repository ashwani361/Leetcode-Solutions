class Solution {
public:
    vector<vector<int>>bridges;
    
    void dfs(int node, int parent, vector<int>& vis, vector<int>& low, vector<int>& tin, int timer, vector<vector<int>>& adj){
        vis[node] = 1;
        low[node] = tin[node] = timer++;
        
        for(auto it:adj[node]){
            if(it==parent){
                continue;
            }
            if(!vis[it]){
                dfs(it, node, vis, low, tin, timer, adj);
                low[node] = min(low[node], low[it]);
                if(low[it]>tin[node]){
                    bridges.push_back({node, it});
                }
            }
            else{
                low[node] = min(low[node], tin[it]);
            }
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& v) {
        vector<vector<int>>adj(n+1);
        vector<int>vis(n, 0), low(n, -1), tin(n, -1);
        for(int i=0; i<v.size(); i++){
            adj[v[i][0]].push_back(v[i][1]);
            adj[v[i][1]].push_back(v[i][0]);
        }
        int timer = 0;
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                dfs(i, -1, vis, low, tin, timer, adj);
            }
        }
        return bridges;
    }
};