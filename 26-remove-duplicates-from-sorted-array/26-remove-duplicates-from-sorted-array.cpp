class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n = v.size();
        int j = 1;
        if(n==1){
            return n;
        }
        for(int i=0; i<n-1; i++){
            if(v[i+1]!=v[i]){
                v[j++] = v[i+1];
            }
        }
        return j;
    }
};