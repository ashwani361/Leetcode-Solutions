class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n = v.size();
        k%=n;
        if(n==1 or k==0){
            return;
        }
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin()+k);
        reverse(v.begin()+k, v.end());
        // return v;
    }
};