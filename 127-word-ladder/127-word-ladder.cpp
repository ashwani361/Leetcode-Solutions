class Solution {
public:
    int ladderLength(string s, string e, vector<string>& v) {
        unordered_set<string>st;
        bool ispresent = false;
        
        for(auto w:v){
            if(e==w){
                ispresent = true;
            }
            st.insert(w);
        }
        if(!ispresent){
            return 0;
        }
        
        queue<string>q;
        q.push(s);
        int depth = 0;
        
        while(q.size()){
            depth++;
            int lsize = q.size();
            while(lsize--){
                string curr = q.front();
                q.pop();
                
                for(int i=0; i<curr.size(); i++){
                    string temp = curr;
                    for(char c='a'; c<='z'; c++){
                        temp[i] = c;
                        if(curr == temp){
                            continue;
                        }
                        if(temp == e){
                            return depth+1;
                        }
                        if(st.find(temp)!=st.end()){
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};