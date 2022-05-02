class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        int n = v.size();
        int j=0;
        for(int i=0; i<n; i++){
            if(v[i]%2==0){
                swap(v[i], v[j++]);
            }
        }
        return v;
    }
};