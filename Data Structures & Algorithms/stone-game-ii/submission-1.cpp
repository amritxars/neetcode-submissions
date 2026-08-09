class Solution {
public:

    int solve(vector<int>& piles, int i, int M, vector<int>& suffix, vector<vector<int>>& dp){

        int n = piles.size();

        if(i>=n) return 0;
        
        if(dp[i][M] != -1) return dp[i][M];

        int ans = 0;

        for(int x = 1; x<=2*M && i+x<=n; x++){

            int whatever = solve(piles, i+x, max(M,x), suffix, dp);

            int current = suffix[i] - whatever;

            ans = max(ans, current);
        }

        return dp[i][M] = ans;
    }
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        vector<int> suffix(n+1,0);
        vector<vector<int>> dp(n, vector<int>(n+1, -1));

        for(int i = n-1; i>=0; i--){
            suffix[i] = suffix[i+1] + piles[i];
        }

        return solve(piles, 0, 1, suffix, dp);
    }
};