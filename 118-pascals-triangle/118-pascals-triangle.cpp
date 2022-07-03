class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        if(n==1){
            vector<int>t (1, 1);
            ans.push_back(t);
            return ans;
        }
        else{
            vector<int>v (1, 1);
            ans.push_back(v);
            vector<int>u(2, 1);
            ans.push_back(u);
            for(int i=2; i<n; i++){
                vector<int>t;
                t.push_back(1);
                for(int j=1; j<i; j++){
                    t.push_back(ans[i-1][j]+ans[i-1][j-1]);
                }
                t.push_back(1);
                ans.push_back(t);
            }
            return ans;
        }
    }
};