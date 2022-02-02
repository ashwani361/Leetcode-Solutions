class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pa(26, 0);
        vector<int>sa(26, 0);
        for(auto i: p){
            pa[i-'a']++;
        }
        int i=0, j=0;
        vector<int>ans;
        while(j<s.size()){
            sa[s[j]-'a']++;
            if(j-i+1==p.size()){
                bool flag = true;
                for(int k=0; k<26; k++){
                    if(pa[k]!=sa[k]){
                        flag = false;
                    }
                }
                if(flag){
                    ans.push_back(i);
                }
                sa[s[i]-'a']--;
                i++;
            }
            
            j++;
        }
        return ans;
    }
};