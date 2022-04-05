class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size();
        if(n<=1){
            return 0;
        }
        int ans = INT_MIN;
        int l = 0, r = n-1;
        while(l<r){
            ans = max(ans, min(v[l], v[r])*(r-l));
            if(v[r]>v[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};