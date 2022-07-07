class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int t) {
        set<vector<int>>s;
        int n = v.size();
        sort(v.begin(), v.end());
        vector<vector<int>>ans;
        
        if(n<4){
            return ans;
        }
        for(int i=0; i<n-3; i++){
            if(i>=1 and i<n and v[i]==v[i-1]){
                continue;
            }
            
            for(int j=i+1; j<n-2; j++){
                if(j>=i+2 and j<n and v[j]==v[j-1]){
                    continue;
                }
                
                int l = j+1, r = n-1;
                while(l<r){
                    long long tsum = (long long)v[i]+(long long)v[j]+(long long)v[l]+(long long)v[r];
                    if(tsum==t){
                        vector<int>temp;
                        temp.push_back(v[i]);
                        temp.push_back(v[j]);
                        temp.push_back(v[l]);
                        temp.push_back(v[r]);
                        s.insert(temp);
                        l++;
                    }
                    else if(tsum>t){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }
        
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};