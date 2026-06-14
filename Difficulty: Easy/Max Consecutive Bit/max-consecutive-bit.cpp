class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        if (arr.empty()) return 0;
        
        int max_count = 1;
        int current_count = 1;
        
        for (size_t i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                current_count++;
            } 
            else {
                max_count = max(max_count, current_count);
                current_count = 1;
            }
        }
        return max(max_count, current_count);
    }
};