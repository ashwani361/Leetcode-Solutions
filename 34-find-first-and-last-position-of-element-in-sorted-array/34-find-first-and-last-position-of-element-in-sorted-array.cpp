class Solution {
public:
    vector<int> searchRange(vector<int>& v, int x) {
        int n = v.size();
        int l=0, r = n-1;
        int lans = -1, rans = -1;
        
        while(l<=r){
            int m = l+(r-l)/2;
            if(v[m]==x){
                lans = m;
                r = m-1;
            }
            else if(v[m]>x){
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        
        l=0, r = n-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(v[m]==x){
                rans = m;
                l = m+1;
            }
            else if(v[m]>x){
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        
        return {lans, rans};
    }
};