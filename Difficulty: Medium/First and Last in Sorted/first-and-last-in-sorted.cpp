#include <vector>

using namespace std;

class Solution {
private:
    int getFirst(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;
        int first = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == x) {
                first = mid;      // Record candidate
                high = mid - 1;   // Keep searching LEFT
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }
    
    int getLast(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;
        int last = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == x) {
                last = mid;       // Record candidate
                low = mid + 1;    // Keep searching RIGHT
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }

public:
    vector<int> find(vector<int>& arr, int x) {
        // C++ allows us to return a vector instantly using initializer lists {}
        return {getFirst(arr, x), getLast(arr, x)};
    }
};