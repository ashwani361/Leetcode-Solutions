class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int>num;
        for(int i=1; i<n; i++){
            fact = fact*i;
            num.push_back(i);
        }
        num.push_back(n);
        string ans = "";
        k--;
        while(true){
            ans = ans+to_string(num[k/fact]);
            num.erase(num.begin() + k/fact);
            if(num.empty()){
                break;
            }
            k = k%fact;
            fact = fact/num.size();
        }
        return ans;
    }
};