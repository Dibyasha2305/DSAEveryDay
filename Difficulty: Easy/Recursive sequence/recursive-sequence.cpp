class Solution {
  public:
    long long MOD = 1e9 + 7;

    long long helper(int current_term, long long current_num, int n) {
        if (current_term > n) {
            return 0;
        }

        long long term_product = 1;

        for (int i = 0; i < current_term; i++) {
            term_product = (term_product * current_num) % MOD;
            current_num++;
        }

        return (term_product + helper(current_term + 1, current_num, n)) % MOD;
    }

    int sequence(int n) {
        return helper(1, 1, n);
    }
};
    