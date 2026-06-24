class Solution {
public:
    int longestCommonPrefix(string str1, string str2) {
        int max_len = 0;
        string current_prefix = "";
        
        // Loop through each character of str1
        for (int i = 0; i < str1.length(); i++) {
            
            // Grow the prefix by 1 character
            current_prefix += str1[i];
            
            // Check if this newly grown prefix exists ANYWHERE in str2
            if (str2.find(current_prefix) != string::npos) {
                // If it exists, record its length
                max_len = current_prefix.length();
            } else {
                // The moment we don't find the prefix, we break out early.
                // No longer prefix will possibly match.
                break;
            }
        }
        
        return max_len;
    }
};