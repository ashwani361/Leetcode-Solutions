class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n&1){
            return false;
        }
        stack<char>st;
        for(int i=0; i<n; i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }
            else if(st.empty()){
                return false;
            }
            else if(st.top()=='(' and s[i]!=')'){
                return false;
            }
            else if(st.top()=='[' and s[i]!=']'){
                return false;
            }
            else if(st.top()=='{' and s[i]!='}'){
                return false;
            }
            else{
                st.pop();
            }
        }
        
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};