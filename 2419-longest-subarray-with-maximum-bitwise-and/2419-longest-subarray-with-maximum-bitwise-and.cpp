class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int ans = 0, len=0, ma = 0;
        for(auto i:v){
            ma = max(ma, i);
        }
        
        for(auto i:v){
            if(i==ma){
                len++;
            }
            else{
                len = 0;
            }
            ans = max(ans, len);
        }
        return ans;
    }
};