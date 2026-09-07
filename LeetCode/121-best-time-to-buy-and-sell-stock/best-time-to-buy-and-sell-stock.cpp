class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int price : prices) {

            // Cheapest buying price so far
            minPrice = min(minPrice, price);

            // Profit if we sell today
            int profit = price - minPrice;

            // Best profit seen so far
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};