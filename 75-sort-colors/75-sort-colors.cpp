class Solution {
public:
    void sortColors(vector<int>& v) {
        int n = v.size();
        int l=0, m=0, r=n-1;
        while(m<=r){
            if(v[m]==0){
                swap(v[l++], v[m++]);
            }
            else if(v[m]==1){
                m++;
            }
            else{
                swap(v[m], v[r--]);
            }
        }
        return;
    }
};