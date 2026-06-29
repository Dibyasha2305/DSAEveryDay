#include <vector>

using namespace std;

class Solution {
private:
    int getFirst(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                first = mid;
                high = mid - 1; 
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }

    int getLast(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                last = mid;
                low = mid + 1; 
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }

public:
    int countFreq(vector<int>& arr, int target) {
        int first = getFirst(arr, target);
        
        if (first == -1) return 0;
        
        int last = getLast(arr, target);
        
        return (last - first) + 1;
    }
};