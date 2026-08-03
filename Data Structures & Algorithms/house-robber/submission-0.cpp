class Solution {
public:

    int solve(vector<int>& nums, int i, int free, vector<vector<int>>& dp){

        if(i>=nums.size()) return 0;
        
        if(dp[i][free] != -1) return dp[i][free];

        if(free == 0){
            return dp[i][free] = solve(nums,i+1,1,dp);
        }

        int take = nums[i] + solve(nums,i+1,0,dp);
        int notTake = solve(nums,i+1,1,dp);

        return max(take, notTake);

    }
    int rob(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(2,-1));

        return solve(nums,0,1,dp);
        
    }
};
