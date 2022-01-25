class Solution {
public:
    bool validMountainArray(vector<int>& v) {
        int st=0, en = 0;
        int n = v.size();
        if(n<3){
            return false;
        }
        else{
            for(int i=0; i<n-1; i++){
                if(v[i]<v[i+1]){
                    st++;
                }
                else{
                    break;
                }
            }
            for(int i=n-1; i>0; i--){
                if(v[i]<v[i-1]){
                    en++;
                }
                else{
                    break;
                }
            }
            if(st>0 and en>0 and st+en==n-1){
                return true;
            }
            else{
                return false;
            }
        }
    }
};