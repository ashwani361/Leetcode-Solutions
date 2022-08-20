class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& s) {
        priority_queue<int>fuels;
        int ans =0, maxreachable = startFuel;
        s.push_back({target, 0});
        for(int i=0; i<s.size(); i++){
            while(fuels.size() and maxreachable<s[i][0]){
                ans++;
                maxreachable+=fuels.top();
                fuels.pop();
            }
            if(maxreachable<s[i][0]){
                return -1;
            }
            fuels.push(s[i][1]);
        }
        return ans;
    }
};