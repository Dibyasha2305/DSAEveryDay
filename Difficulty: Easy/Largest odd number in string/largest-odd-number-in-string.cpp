class Solution {
public:
    string maxOdd(string s) {
        int n = s.length();
        
        // Scan backward from the end of the string
        for (int i = n - 1; i >= 0; i--) {
            
            // Convert the character digit to a real integer
            int digit = s[i] - '0';
            
            // If the digit is odd, we've found our rightmost boundary!
            if (digit % 2 != 0) {
                // Return a substring starting at index 0, with a length of (i + 1)
                return s.substr(0, i + 1);
            }
        }
        
        // If the loop finishes, there are no odd digits at all
        return "";
    }
};