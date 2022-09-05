class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>>ans;
        int n = v.size();
        set<vector<int>>st;
        sort(v.begin(), v.end());
        
        for(int i=0; i<n-2; i++){
            if(i==0 or (i>0 and v[i]>v[i-1])){
                int l = i+1, r = n-1;
                while(l<r){
                    int s = v[i]+v[l]+v[r];
                    if(s==0){
                        st.insert({v[i], v[l], v[r]});
                        l++;
                    }
                    else if(s>0){
                        r--;
                        while(l<r and v[r]==v[r+1]){
                            r--;
                        }
                    }
                    else{
                        l++;
                        while(l<r and v[l]==v[l-1]){
                            l++;
                        }
                    }
                }
            }
        }
        
        for(auto it:st){
            ans.push_back(it);
        }
        
        return ans;
    }
};