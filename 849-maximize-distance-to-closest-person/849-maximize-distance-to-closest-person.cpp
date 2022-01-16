class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        int n = s.size();
        int empty = 0, res=0, i1=-1, i2=-1;
        
        for(int i=0; i<n; i++){
            if(s[i]==1){
                empty =0;
                if(i1==-1){
                    i1 = i;
                }
                i2 = i;
            }
            else{
                empty++;
                res = max(res, (empty+1)/2);
            }
        }
        res = max({res, i1, n-1-i2});
        return res;
    }
};