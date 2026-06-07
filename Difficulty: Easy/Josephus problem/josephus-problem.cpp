class Solution {
public:
    int josephusZeroBased(int n, int k) {
        if (n == 1) return 0;
        return (josephusZeroBased(n - 1, k) + k) % n;
    }

    int josephus(int n, int k) {
        return josephusZeroBased(n, k) + 1;
    }
};