class Solution {
public:
    char nonRepeatingChar(string &s) {
        // Array to store frequencies of the 26 lowercase letters
        // Initialize all 26 slots to 0
        vector<int> freq(26, 0);
        
        // Pass 1: Count the frequency of every character
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // Pass 2: Find the first character with a frequency of exactly 1
        for (char c : s) {
            if (freq[c - 'a'] == 1) {
                return c; // We found it!
            }
        }
        
        // If we finish the loop and didn't return, everything repeats
        return '$';
    }
};