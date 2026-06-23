class Solution {
public:
    int longestKSubstr(string s, int k) {
        int n = s.length();
        int max_len = -1;
        
        vector<int> freq(128, 0); 
        int unique_count = 0; 
        
        int left = 0;
    
        for (int right = 0; right < n; right++) {
            char current_char = s[right];
            
            if (freq[current_char] == 0) {
                unique_count++;
            }
            freq[current_char]++;
            
            while (unique_count > k) {
                char left_char = s[left];
                
                freq[left_char]--;
                
                if (freq[left_char] == 0) {
                    unique_count--;
                }
                
                left++; 
            }
            
            if (unique_count == k) {
                int current_window_size = right - left + 1;
                max_len = max(max_len, current_window_size);
            }
        }
        
        return max_len;
    }
};