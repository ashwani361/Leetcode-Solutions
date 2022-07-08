class Solution {
public:
    int lengthOfLongestSubstring(string v) {
        int n = v.size();
        unordered_map<char, int>mp;
        int ans = 0;
        int i=0, j=0;
        while(j<n){
            mp[v[j]]++;
            if(mp.size()!=j-i+1){
                while(mp.size()!=j-i+1){
                    mp[v[i]]--;
                    if(mp[v[i]]==0){
                        mp.erase(v[i]);
                    }
                    i++;
                }
            }
            else{
                ans = max(ans, j-i+1);
            }
            j++;
        }
        return ans;
    }
};