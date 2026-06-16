class Solution {
  public:
    int evenlyDivides(int n) {
        int count = 0;
        
        // We need a copy of 'n' to chop up, so we don't destroy the original 'n'
        int temp = n;
        
        // Loop until we have chopped off every digit
        while (temp > 0) {
            // Extract the last digit
            int digit = temp % 10;
            
            // Check 1: Make sure the digit isn't 0 (to avoid division by zero errors)
            // Check 2: See if the original 'n' is evenly divisible by this digit
            if (digit != 0 && n % digit == 0) {
                count++;
            }
            
            // Chop off the last digit to process the next one on the next loop
            temp /= 10;
        }
        
        return count;
    }
};