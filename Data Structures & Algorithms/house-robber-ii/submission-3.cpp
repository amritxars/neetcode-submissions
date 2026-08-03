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

        return dp[i][free] = max(take, notTake);

    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> a(nums.begin(), nums.end()-1);
        vector<int> b(nums.begin()+1, nums.end());

        vector<vector<int>> dp1(a.size(), vector<int>(2,-1));
        vector<vector<int>> dp2(b.size(), vector<int>(2,-1));

        

        return max(solve(a,0,1,dp1), solve(b,0,1,dp2));
        
    }
};
