class Solution {
public:
    int titleToNumber(string s) {
        long long t = 1, n = s.size();
        reverse(s.begin(), s.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            ans+=t*(s[i]-'A'+1);
            t*=26;
        }
        return ans;
    }
};