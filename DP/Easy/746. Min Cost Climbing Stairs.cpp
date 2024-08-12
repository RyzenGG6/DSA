class Solution {
public:

    int f(vector<int>& cost,vector<int>& dp){
        dp[0]=cost[0];
        int n=cost.size();
        dp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }


    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return f(cost,dp);
    }
};