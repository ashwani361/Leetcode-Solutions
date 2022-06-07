class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
        int k = n+m-1;
        int i=n-1, j=m-1;
        while(i>=0 and j>=0){
            if(a[i]>b[j]){
                a[k] = a[i];
                i--;
            }
            else{
                a[k]=b[j];
                j--;
            }
            k--;
        }
        while(j>=0){
            a[k]=b[j];
            j--;
            k--;
        }
    }
};