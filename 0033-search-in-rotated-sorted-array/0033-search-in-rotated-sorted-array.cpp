class Solution {
public:
    int search(vector<int>& v, int t) {
        int n = v.size();
        
        if(n==1){
            if(t==v[0]){
                return 0;
            }
            else{
                return -1;
            }
        }
        if(n==2){
            if(t==v[0]){
                return 0;
            }
            else if(t==v[1]){
                return 1;
            }
            else{
                return -1;
            }
        }
        
        int l =0, r = n-1;
        while(l<=r){
            int m = l+(r-l)/2;
            
            if(v[m]==t){
                return m;
            }
            else if(v[l]<=v[m]){
                if(v[l]<=t and t<v[m]){
                    r = m-1;
                }
                else{
                    l = m+1;
                }
            }
            else{
                if(t>v[m] and t<=v[r]){
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
        }
        return -1;
    }
};