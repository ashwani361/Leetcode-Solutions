class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][5];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<5; j++){
                if(i==0 and j==0){
                    dp[i][j] = 0;
                }
                else if(i==0){
                    dp[i][j] = 0;
                }
                else if(j==0){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        for(int i=1; i<n+1; i++){
            for(int j=1; j<5; j++){
                dp[i][j]+=dp[i][j-1]+dp[i-1][j];
            }
        }
        
        int ans =0;
        for(int j=0; j<5; j++){
            ans+=dp[n][j];
        }
        return ans;
    }
};