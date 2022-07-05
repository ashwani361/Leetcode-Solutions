class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        unordered_set<int>s;
        for(int a:v){
            s.insert(a);
        }
        
        int ls = 0;
        for(int n:v){
            if(!s.count(n-1)){
                int cn = n;
                int cs = 1;
                
                while(s.count(cn+1)){
                    cn++;
                    cs++;
                }
                ls = max(ls, cs);
            }
        }
        return ls;
    }
};