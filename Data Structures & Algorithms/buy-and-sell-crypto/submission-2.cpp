class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 2 Pointers
        int maxP = 0;
        int profit = 0;

        int l = 0;
        int r = 1; // not at last

        while (r<prices.size()){
            if(prices[l]>prices[r]) l=r;

            else{
                profit = prices[r] - prices[l];
                maxP = max(profit, maxP);
            }
            r++;
        }

        return maxP;
    }
};
