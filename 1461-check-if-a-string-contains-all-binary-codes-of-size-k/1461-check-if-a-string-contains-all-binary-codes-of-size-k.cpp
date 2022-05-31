class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> strs;
        for(int i=0;i+k<=s.size();i++) strs.insert(s.substr(i, k));
        return strs.size()==pow(2, k);
    }
};