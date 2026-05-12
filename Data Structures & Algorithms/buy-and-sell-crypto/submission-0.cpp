class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // BRUTE FORCE
        int maxP = 0;
        int profit = 0;

        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j]>prices[i]){
                    profit = prices[j] - prices[i];
                    maxP = max(profit, maxP);
                }
            }
        }

        return maxP;
    }
};
