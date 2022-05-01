class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>vs;
        for(auto ch:s){
            if(ch=='#'){
                if(vs.size()>0){
                    vs.erase(vs.begin()+vs.size()-1);
                }
                else{
                    continue;
                }
            }
            else{
                vs.push_back(ch);
            }
        }
        
        vector<char>vt;
        for(auto ch:t){
            if(ch=='#'){
                if(vt.size()>0){
                    vt.erase(vt.begin()+vt.size()-1);
                }
                else{
                    continue;
                }
            }
            else{
                vt.push_back(ch);
            }
        }
        
        if(vs.size()!=vt.size()){
            return false;
        }
        for(int i=0; i<vs.size(); i++){
            if(vs[i]!=vt[i]){
                return false;
            }
        }
        return true;
    }
};