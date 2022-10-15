class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n = v.size();
        if(n==1){
            return v[0];
        }
        int l = 0, r = n-1;
        while(l<=r){
            int m = l + (r-l)/2;
            
            if(m&1){
                if(v[m]==v[m+1]){
                    r = m-1;
                }
                else{
                    l = m+1;
                }
            }
            else{
                if(v[m]==v[m+1]){
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
        }
        return v[l];
    }
};