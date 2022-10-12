class Solution {
public:
    bool check(vector<string>& ds, int row, int col){
        int n = ds.size();
        for(int i=0; i<n; i++){
            if(ds[i][col]=='Q'){
                return false;
            }
            if(row-i>=0 and col-i>=0 and ds[row-i][col-i]=='Q'){
                return false;
            }
            if(row-i>=0 and col+i<n and ds[row-i][col+i]=='Q'){
                return false;
            }
        }
        return true;
    }
    void solve(vector<vector<string>>& ans, vector<string>& ds, int row){
        if(row==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int col=0; col<ds.size(); col++){
            if(check(ds, row, col)){
                ds[row][col] = 'Q';
                solve(ans, ds, row+1);
                ds[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>ds(n, string(n, '.'));
        solve(ans, ds, 0);
        return ans;
    }
};