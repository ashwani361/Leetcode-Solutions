class Solution {
public:
    int numRescueBoats(vector<int>& v, int l) {
        int n = v.size();
        sort(v.begin(), v.end());
        int i=0, j=n-1;
        int c = 0;
        while(i<j){
            if(v[i]+v[j]<=l){
                i++;
                j--;
                c++;
            }
            else{
                j--;
                c++;
            }
        }
        if(i==j){
            c++;
        }
        return c;
    }
};