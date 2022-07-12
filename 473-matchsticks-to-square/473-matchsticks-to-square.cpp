class Solution {
    public:
    bool already_happened(vector<int>& sides, int pos){
        for(int i=0; i<pos; i++){
            if(sides[i]==sides[pos]){
                return true;
            }
        }
        return false;
    }
    bool recur(vector<int>& sides, int pos, int target, vector<int>& st){
        if(pos==st.size()){
            return sides[0]==target and sides[1]==target and sides[2]==target and sides[3]==target;
        }
        
        for(int i=0; i<4; i++){
            if(sides[i]+st[pos]>target or already_happened(sides, i)){
                continue;
            }
            
            sides[i]+=st[pos];
            
            if(recur(sides, pos+1, target, st)){
                return true;
            }
            sides[i]-=st[pos];
        }
        return false;
    }
    bool makesquare(vector<int>& st){
        int sum = accumulate(st.begin(), st.end(), 0);
        
        sort(st.begin(), st.end());
        
        vector<int>sides(4, 0);
        
        if(sum%4 or st.size()<4){
            return false;
        }
        
        sum/=4;
        
        if(st[0]>sum){
            return false;
        }
        
        return recur(sides, 0, sum, st);
    }
};