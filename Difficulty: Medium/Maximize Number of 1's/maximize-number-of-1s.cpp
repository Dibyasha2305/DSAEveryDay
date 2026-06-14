class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int left = 0;
        int zero_count = 0;
        int max_len = 0;
        
        for (int right = 0; right < arr.size(); right++) {
            if (arr[right] == 0) {
                zero_count++;
            }
            
            while (zero_count > k) {
                if (arr[left] == 0) {
                    zero_count--;
                }
                left++;
            }
            
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};