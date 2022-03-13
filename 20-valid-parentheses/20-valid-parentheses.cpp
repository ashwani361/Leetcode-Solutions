class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n==0) return true;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return false;
                char c=st.top();
                st.pop();
                if(s[i]==')'&&c!='(') return false;
                if(s[i]=='}'&&c!='{') return false;
                if(s[i]==']'&&c!='[') return false;
            }
        }
        return st.empty();
    }
};