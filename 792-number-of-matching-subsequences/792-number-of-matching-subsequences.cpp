class Solution {
    
public:
    int numMatchingSubseq(string s, vector<string>& v) {
        unordered_map<string, int>mp;
        for(auto x:v){
            mp[x]++;
        }
        int ans = 0;
        for(auto it:mp){
            int i=0, j=0;
            while(i<s.size() and j<it.first.size()){
                if(s[i]==it.first[j]){
                    i++;
                    j++;
                }
                else{
                    i++;
                }
            }
            if(j==it.first.size()){
                ans+=it.second;
            }
        }
        return ans;
    }
};