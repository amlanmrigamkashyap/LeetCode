class Solution {

    int calc(vector<int>&cost, int n, int ind, vector<int> &dp){
        if(ind <= 1) return cost[ind];
        if(dp[ind]!=-1) return dp[ind];
        int c = 0;
        c+= cost[ind];
        c += min(calc(cost, n, ind-1, dp), calc(cost, n, ind-2, dp));
        return dp[ind] = c;
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {

        vector<int> dp(cost.size(),-1);
        return min(calc(cost, cost.size(), cost.size()-1, dp), calc(cost, cost.size(), cost.size()-2, dp));
        
    }
};