class Solution {
public:
    bool ok(vector<int>& v, int& mid, int& h){
        int time = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i]%mid==0){
                time+=v[i]/mid;
            }
            else{
                time+=v[i]/mid+1;
            }
        }
        return time<=h;
    }
    
    int minEatingSpeed(vector<int>& v, int h) {
        int n = v.size();
        int l = 1, r = 1e9;
        int mid;
        
        while(l<r){
            mid = l+(r-l)/2;
            if(ok(v, mid, h)){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        
        return l;
    }
};