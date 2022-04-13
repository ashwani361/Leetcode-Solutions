class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int dir = 0;
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int m = n;
        int t=0, l=0, b = m-1, r=n-1;
        int c = 1;
        while(t<=b && l<=r){
            if(dir==0){
                for(int i=l; i<=r; i++){
                    ans[t][i] = c++;
                    
                }
                t++;
                dir=1;
            }
            else if(dir==1){
                for(int i=t; i<=b; i++){
                    ans[i][r] = c++;
                }
                r--;
                dir=2;
            }
            else if(dir==2){
                for(int i=r; i>=l; i--){
                    ans[b][i] = c++;
                }
                b--;
                dir=3;
            }
            else if(dir==3){
                for(int i=b; i>=t; i--){
                    ans[i][l] = c++;
                }
                l++;
                dir=0;
            }
            else break;
        }
        return ans;
    }
};