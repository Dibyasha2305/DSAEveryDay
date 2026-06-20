class Solution {
public:
    int numberOfWays(int n) {
        // Base cases
        if (n == 1) return 1; // 1 vertical tile
        if (n == 2) return 2; // 2 vertical tiles or 2 horizontal tiles
        
        // Track the last two states to calculate the next one
        int prev2 = 1; 
        int prev1 = 2; 
        
        for (int i = 3; i <= n; ++i) {
            int current = prev1 + prev2;
            
            // Shift the window forward for the next iteration
            prev2 = prev1;
            prev1 = current;
        }
        
        return prev1;
    }
};