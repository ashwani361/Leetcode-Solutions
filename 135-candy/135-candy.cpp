class Solution {
public:
    int candy(vector<int>& v){
        int n = v.size();
        if(n<=1){
            return 1;
        }
        else{
            int s  = 0; 
            int l[n], r[n];
            for(int i=0; i<n; i++){
                l[i] = r[i] = 1;
            }
            for(int i=1; i<n; i++){
                if(v[i]>v[i-1]){
                    l[i] = l[i-1]+1;
                }
            }
            
            for(int i=n-2; i>=0; i--){
                if(v[i]>v[i+1]){
                    r[i] = r[i+1] + 1;
                }
            }
            
            for(int i=0; i<n; i++){
                s+=max(l[i], r[i]);
            }
            return s;
        }
    }
};