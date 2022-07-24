class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int x) {
        int n = v.size(), m = v[0].size();
        int i=0, j=m-1;
        while(i<=n-1 and j>=0){
            if(v[i][j]==x){
                return true;
            }
            else if(v[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};