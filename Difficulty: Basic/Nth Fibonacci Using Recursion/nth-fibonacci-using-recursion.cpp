class Solution {
  public:
    int nthFibonacci(int n) {
        // 1. The Base Case: If n is 0 or 1, it simply returns itself.
        if (n <= 1) {
            return n;
        }
        
        // 2. The Recursive Step: Call the exact same function for the two previous numbers.
        return nthFibonacci(n - 1) + nthFibonacci(n - 2);
    }
};