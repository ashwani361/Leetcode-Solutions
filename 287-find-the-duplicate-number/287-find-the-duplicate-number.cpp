class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n = v.size();
        int i=0;
        while(i<n){
            if(v[i]!=v[v[i]-1]){
                swap(v[i], v[v[i]-1]);
            }
            else{
                i++;
            }
        }
        
        for(int i=0; i<n; i++){
            if(v[i]!=i+1){
                return v[i];
            }
        }
        return n+1;
    }
};