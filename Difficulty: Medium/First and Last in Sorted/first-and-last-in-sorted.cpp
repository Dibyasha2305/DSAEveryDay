#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int first_occ = -1, last_occ = -1;
        int n = arr.size();
        
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                first_occ = mid; 
                high = mid - 1; 
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        low = 0; 
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                last_occ = mid;
                low = mid + 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return {first_occ, last_occ};
    }
};