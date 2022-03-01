class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1, 0);
        for(int i=0; i<n+1; i++){
            int c = 0;
            int t = i;
            while(t>0){
                c+=(t&1);
                t/=2;
            }
            ans[i] = c;
        }
        return ans;
    }
};