class Solution {
public:
    bool checkInclusion(string t, string s) {
        int n = s.size(), m = t.size();
        int i=0, j=0;
        vector<int>ta(27, 0);
        vector<int>sa(27, 0);
        
        for(auto it:t){
            ta[it-'a']++;
        }
        while(j<n){
            sa[s[j]-'a']++;
            if(j-i+1==m){
                bool f = true;
                for(int k=0; k<26; k++){
                    if(sa[k]!=ta[k]){
                        f = false;
                        break;
                    }
                }
                if(f){
                    return true;
                }
                sa[s[i]-'a']--;
                i++;
            }
            
            j++;
        }
        return false;
    }
};