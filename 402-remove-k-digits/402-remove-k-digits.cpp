class Solution {
public:
    string removeKdigits(string s, int k) {
        string ans = "";
        int n = s.size();
        for(int i=0; i<n; i++){
            while(ans.size() and k>0 and ans[ans.size()-1]>s[i]){
                ans.pop_back();
                k--;
            }
            ans.push_back(s[i]);
        }
        
        while(ans.size() and k>0){
            ans.pop_back();
            k--;
        }
        
        int i = 0;
        while(ans[i]=='0'){
            i++;
        }
        
        if(i==ans.size()){
            return "0";
        }
        else{
            return ans.substr(i);
        }
    }
};