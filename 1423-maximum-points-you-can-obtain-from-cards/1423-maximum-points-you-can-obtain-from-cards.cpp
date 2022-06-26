class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        int sum =0;
        for(auto i:v){
            sum+=i;
        }
        if(k==n){
            return sum;
        }
        else{
            sum = 0;
            int ans;
            for(int i=0; i<k; i++){
                sum+=v[i];
            }
            ans = sum;
            for(int i=k-1; i>=0; i--){
                sum-=v[i];
                int j = k-i-1;
                sum+=v[n-j-1];
                ans= max(ans, sum);
            }
            return ans;
        }
    }
};