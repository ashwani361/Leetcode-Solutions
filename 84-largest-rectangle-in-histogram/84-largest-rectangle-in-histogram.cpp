class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
        stack<pair<int, int>>st1, st2;
        int n = v.size();
        
        vector<int>rightsm, leftsm;
        
        for(int i=n-1; i>=0; i--){
            if(st1.empty()){
                rightsm.push_back(n);
            }
            else if(v[i]>st1.top().first){
                rightsm.push_back(st1.top().second);
            }
            else{
                
                
                while(st1.size() and v[i]<=st1.top().first){
                    st1.pop();
                }
                if(st1.empty()){
                    rightsm.push_back(n);
                }
                else{
                    rightsm.push_back(st1.top().second);
                }
            }
            st1.push({v[i], i});
        }
        
        for(int i=0; i<n; i++){
            if(st2.empty()){
                leftsm.push_back(-1);
            }
            else if(v[i]>st2.top().first){
                leftsm.push_back(st2.top().second);
            }
            else{
                
                
                while(st2.size() and v[i]<=st2.top().first){
                    st2.pop();
                }
                if(st2.empty()){
                    leftsm.push_back(-1);
                }
                else{
                    leftsm.push_back(st2.top().second);
                }
            }
            st2.push({v[i], i});
        }
        
        reverse(rightsm.begin(), rightsm.end());
        
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            ans = max(ans, v[i]*(rightsm[i] - leftsm[i] - 1));
        }
        return ans;
    }
};