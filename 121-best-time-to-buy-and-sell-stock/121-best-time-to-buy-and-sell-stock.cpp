class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int answer =0;
        int cheapest = prices[0];
        for(int i=1; i<prices.size(); i++){
            cheapest = min(cheapest, prices[i]);
            answer = max(answer, prices[i]-cheapest);
            
        }
        return answer;
    }
};