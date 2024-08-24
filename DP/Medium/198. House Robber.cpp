class Solution {
public:
    int robhelp(int i, vector<int>& nums, vector<int>& dp) {
        if (i == 0)
            return nums[i];
        if (i < 0)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        else {
            int pick = nums[i] + robhelp(i - 2, nums,dp);
            int npick = 0 + robhelp(i - 1, nums,dp);
            return dp[i] = max(pick, npick);
        }
    }

    int rob(vector<int>& nums) { 
        vector<int>dp(nums.size(),-1);
        
        return robhelp(nums.size() - 1, nums,dp); }
};