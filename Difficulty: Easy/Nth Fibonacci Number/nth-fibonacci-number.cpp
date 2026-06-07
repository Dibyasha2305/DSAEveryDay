class Solution {
public:
    int helper(int n, vector<int>& memo) {
        if (n <= 1) {
            return n;
        }
        if (memo[n] != -1) {
            return memo[n];
        }
        memo[n] = helper(n - 1, memo) + helper(n - 2, memo);
        
        return memo[n];
    }

    int nthFibonacci(int n) {
        vector<int> memo(n + 1, -1);
        
        return helper(n, memo);
    }
};