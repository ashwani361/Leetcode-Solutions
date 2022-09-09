class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int n = v.size();
        int ans = 0, cnt = 0;
        for(int i:v){
            if(i==1){
                cnt++;
                ans = max(ans, cnt);
            }
            else{
                
                cnt = 0;
            }
        }
        return ans;
    }
};