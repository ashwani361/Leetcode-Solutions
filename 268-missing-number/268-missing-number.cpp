class Solution {
public:
    int missingNumber(vector<int>& v) {
        unordered_map<int, int>mp;
        for(auto i:v){
            mp[i]++;
        }
        for(int i=0; i<=v.size()+1; i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return 0;
    }
};