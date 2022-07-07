class Solution {
public:
    int majorityElement(vector<int>& v) {
        int maj = v[0];
        int n = v.size();
        int count = 1;
        for(int i=1; i<n; i++){
            if(count ==0){
                count = 1;
                maj = v[i];
            }
            else if(v[i]==maj){
                count++;
            }
            else{
                count--;
            }
        }
        return maj;
    }
};