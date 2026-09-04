class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {

        int n = prices.size();

        // Original profit
        long long original = 0;

        for (int i = 0; i < n; i++) {
            original += (long long)strategy[i] * prices[i];
        }

        // Prefix sum of original contribution
        vector<long long> pref(n + 1, 0);

        // Prefix sum of prices
        vector<long long> pricePref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (long long)strategy[i] * prices[i];
            pricePref[i + 1] = pricePref[i] + prices[i];
        }

        long long answer = original;

        for (int l = 0; l + k <= n; l++) {

            int mid = l + k / 2;
            int r = l + k;

            // Original profit of this window
            long long oldProfit = pref[r] - pref[l];

            // New profit:
            // first half -> 0
            // second half -> 1
            long long newProfit = pricePref[r] - pricePref[mid];

            long long total = original - oldProfit + newProfit;

            answer = max(answer, total);
        }

        return answer;
    }
};