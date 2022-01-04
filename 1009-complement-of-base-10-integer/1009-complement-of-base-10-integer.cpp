class Solution {
public:
    int bitwiseComplement(int n) {
        int t = 1;
        if(n==0){
            return 1;
        }
        if(n==1){
            return 0;
        }
        while(t<n){
            t*=2;
        }
        if(t==n){
            return t-1;
        }
        return t-n-1;
    }
};