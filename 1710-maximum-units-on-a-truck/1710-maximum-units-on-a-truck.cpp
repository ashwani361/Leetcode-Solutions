class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int m) {
        int n = v.size();
        for(int i=0; i<v.size(); i++){
            reverse(v[i].begin(), v[i].end());
        }
        sort(v.begin(), v.end());
        int ma = 0;
        int box =0;
        for(int i = n-1; i>=0; i--){
            while(v[i][1]>0 and box<m){
                ma +=v[i][0];
                box++;
                v[i][1]--;
            }
            
        }
        return ma;
    }
};