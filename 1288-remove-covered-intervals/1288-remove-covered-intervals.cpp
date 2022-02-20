class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        int c = 1;
        int l = v[0][0], r = v[0][1];
        for(int i=1; i<v.size(); i++){
            vector<int>t = v[i];
            if(t[0]>l and t[1]>r){
                c++;
                l = t[0];
            }
            r = max(r, t[1]);
        }
        return c;
    }
};