class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int s = 0;
        int ans = INT_MIN;
        int n = v.size();
        for(int i=0; i<n; i++){
            s+=v[i];
            ans = max(ans, s);
            if(s<0){
                s=0;
            }
        }
        return ans;
    }
};