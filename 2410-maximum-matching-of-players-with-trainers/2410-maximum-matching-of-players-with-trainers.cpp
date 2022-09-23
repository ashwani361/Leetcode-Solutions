class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end(), greater<int>());
        sort(trainers.begin(), trainers.end(), greater<int>());
        
        int count = 0;
        int i = 0;
        
        for(int j = 0;j < players.size() && i < trainers.size(); j++){
            if(players[j] <= trainers[i]){
                count++;
                i++;
            }
        }
        
        return count;
    }
};