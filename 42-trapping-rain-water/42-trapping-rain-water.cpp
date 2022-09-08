class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        if(n<3){
            return 0;
        }
        else{
            vector<int>lm(n, INT_MIN), rm(n, INT_MIN);
            lm[0] = v[0];
            rm[n-1] = v[n-1];
            for(int i=1; i<n; i++){
                lm[i] = max(lm[i-1], v[i]);
            }
            for(int i=n-2; i>=0; i--){
                rm[i] = max(rm[i+1], v[i]);
            }
            int ans = 0;
            for(int i=1; i<n-1; i++){
                int temp = min(lm[i], rm[i]);
                if(temp>v[i]){
                    ans+=temp-v[i];
                }
            }
            return ans;
        }
        return 0;
    }
};