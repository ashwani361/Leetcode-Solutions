class Solution {
public:
    int minMoves2(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            ans+=abs(v[n/2]-v[i]);
        }
        return ans;
    }
};