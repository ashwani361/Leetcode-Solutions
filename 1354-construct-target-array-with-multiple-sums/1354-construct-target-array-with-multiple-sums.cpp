class Solution {
public:
    bool isPossible(vector<int>& target) {
        // x, rest -> x+rest, rest
        if(target.size() == 1) return target[0] == 1;
        priority_queue<long> q(target.begin(), target.end());
        auto sum = accumulate(target.begin(), target.end(), 0LL);
        while(q.top() > 1){
            auto x = q.top(); q.pop();
            auto max2nd = q.top();
            auto restSum = sum-x;
            if(x - restSum < 1) return false;
            
            // x - k*restSum > max2nd => k = (x-max2nd) / restSum
            int k = max(1LL, (x-max2nd)/restSum);           
            q.push(x-restSum * k);
            sum -= restSum * k;
        }
        return true;
    }
};