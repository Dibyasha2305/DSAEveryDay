#include <vector>

using namespace std;

class Solution {
  public:
    int firstSearch(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int first_occurrence = -1; // Default to -1 if k is never found
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == k) {
                first_occurrence = mid; // Record candidate
                high = mid - 1;         // Keep searching LEFT for an earlier occurrence
            } else if (arr[mid] < k) {
                low = mid + 1;          // Target is to the right
            } else {
                high = mid - 1;         // Target is to the left
            }
        }
        
        return first_occurrence;
    }
};