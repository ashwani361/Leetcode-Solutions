class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        int n = v.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans.push_back(0);
        }
        ans[0] = v[0];
        for(int i=1; i<n; i++){
            ans[i]+=v[i] + ans[i-1];
        }
        return ans;
    }
};