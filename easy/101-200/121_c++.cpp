class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxProfit = 0;
        int size = prices.size();
        for (int i = 1; i < size; i++) {
            maxProfit = max(maxProfit, prices[i] - min_price);
            if (min_price > prices[i])
                min_price = prices[i];
        }
        return maxProfit;
    }
};