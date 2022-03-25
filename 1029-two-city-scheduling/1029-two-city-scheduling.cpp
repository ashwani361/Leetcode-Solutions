class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& v) {
        int n = v.size();
        sort(v.begin(), v.end(), [](vector<int>& a, vector<int>& b){
            return a[1]-a[0]>b[1]-b[0];
        });
        
        int ans =0;
        for(int i=0; i<n; i++){
            if(i>=n/2){
                ans+=v[i][1];
            }
            else{
                ans+=v[i][0];
            }
        }
        return ans;
    }
};