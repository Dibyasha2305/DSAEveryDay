class Solution {
public:
    string reverseWords(string &s) {
        string result = "";
        int n = s.length();
        int i = n - 1;
        
        while (i >= 0) {
            // Step 1: Skip any multiple or trailing dots
            while (i >= 0 && s[i] == '.') {
                i--;
            }
            
            // If we've reached the start of the string while skipping dots, break
            if (i < 0) {
                break;
            }
            
            // Step 2: Mark the end of the current word
            int word_end = i;
            
            // Step 3: Move left to find the start of the current word
            while (i >= 0 && s[i] != '.') {
                i--;
            }
            
            // Step 4: Extract the word and append it to our result
            // If the result isn't empty, it means we need to add a separator dot first
            if (!result.empty()) {
                result += ".";
            }
            
            // Extract the substring: length is (word_end - i)
            result += s.substr(i + 1, word_end - i);
        }
        
        return result;
    }
};