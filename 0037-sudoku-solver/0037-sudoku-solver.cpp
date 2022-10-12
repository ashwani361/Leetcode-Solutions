class Solution {
public:
    
    bool isval(vector<vector<char>>& v, int r, int c, char ch){
        for(int i=0; i<9; i++){
            if(v[i][c]==ch){
                return false;
            }
            if(v[r][i]==ch){
                return false;
            }
            if(v[3*(r/3)+i/3][3*(c/3)+i%3]==ch){
                return false;
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& v){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(v[i][j]=='.'){
                    for(char ch='1'; ch<='9'; ch++){
                        if(isval(v, i, j, ch)){
                            v[i][j] = ch;
                            if(solve(v)){
                                return true;
                            }
                            else{
                                v[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& v) {
        solve(v);
    }
};