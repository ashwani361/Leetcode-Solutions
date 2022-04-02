class Solution {
public:
    
    bool validPalindrome(string s){
        int n = s.size();
        if(n<=2){
            return true;
        }
        int l=0, r=n-1;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                int ll = l+1, rr = r;
                while(ll<=rr and s[ll]==s[rr]){
                    // if(){
                        ll++;
                        rr--;
                    // }
                }
                if(ll>=rr){
                    return true;
                }
                
                ll = l, rr = r-1;
                while(ll<=rr and s[ll]==s[rr]){
                    // if(s[ll]==s[rr]){
                        ll++;
                        rr--;
                    // }
                }
                if(ll>=rr){
                    return true;
                }
                
                return false;
            }
        }
        return true;
    }
};