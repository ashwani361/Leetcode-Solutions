class Solution {
public:
    vector<int> X = {-1, -1, -1,  0, 0,  1, 1, 1};
    vector<int> Y = {-1,  0,  1, -1, 1, -1, 0, 1};
    
    bool isval(int x, int y, int n, int m) {
        return x >= 0 && x <= n-1 && y >= 0 && y <= m-1;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& v) {
        int n = v.size(), m = v[0].size();
        if(v[0][0] or v[n-1][m-1]){
            return -1;
        }
        
        queue<pair<int, int>>q;
        q.push({0, 0});
        v[0][0] = 1;
        
        while(q.size()){
            auto it = q.front();
            q.pop();
            
            int i = it.first;
            int j = it.second;
            if(i==n-1 and j==m-1){
                return v[i][j];
            }
            
            
            for(int k=0; k<8; k++){
                int x = i+X[k];
                int y = j+Y[k];
                
                if(isval(x, y, n, m) and v[x][y]==0){
                    q.push({x, y});
                    v[x][y] = v[i][j] + 1;
                }
            }
        }
        
        return -1;
    }
};