class Solution {
    bool check(int n, vector<int> &dp){
        if(n==1) return 0;
        if(dp[n]!= -1) return dp[n];
        for(int i = 1; i*i<= n; i++){
            if(n%i==0){
                int f1 = i, f2 = n/i;
                if(!check(n-f1, dp)) return dp[n] = 1;
                if(f1!=1){
                    if(!check(n-f2, dp)) return dp[n] = 1;
                }
            }
        }
        return dp[n] = 0;
    }
public:
    bool divisorGame(int n) {
        vector<int> dp(n+1, -1);
        return check(n,dp);
        
    }
};