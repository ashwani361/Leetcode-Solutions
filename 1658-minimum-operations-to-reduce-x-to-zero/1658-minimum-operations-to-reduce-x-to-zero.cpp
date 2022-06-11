class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        int n = v.size();
        int sum=0;
        map<int, int>hash;
        for(int i=0; i<n; i++){
            sum+=v[i];
            hash[sum] = i;
        }
        if(x>sum){
            return -1;
        }
        hash[0]=0;
        
        int ma =0;
        sum-=x;
        int val=0;
        for(int i=0; i<n; i++){
            val+=v[i];
            if(hash.count(val-sum)){
                if(val-sum==0){
                    ma = max(ma, i-hash[val-sum]+1);
                }
                else{
                    ma = max(ma, i-hash[val-sum]);
                }
            }
        }
        return ma == 0 ? (sum==0 ? n : -1) : n-ma;
    }
};