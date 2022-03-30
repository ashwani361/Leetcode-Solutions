class Solution {
public:
    bool searchMatrix(vector<vector<int> > &v, int t) {
        int n= v.size(), m = v[0].size();
        int l =0, r = m*n-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(v[mid/m][mid%m]==t){
                return true;
            }
            else if(v[mid/m][mid%m]>t){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return false;
    }
};