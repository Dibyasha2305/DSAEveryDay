#include <vector>
#include <algorithm> // Required for std::swap

using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;
        
        // We stop when mid crosses high, meaning we have evaluated every single element
        while (mid <= high) {
            
            if (arr[mid] == 0) {
                // Throw the 0 to the front
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } 
            else if (arr[mid] == 1) {
                // Leave the 1 in the middle
                mid++;
            } 
            else { // arr[mid] == 2
                // Throw the 2 to the back
                swap(arr[mid], arr[high]);
                high--;
                // Note: mid is NOT incremented here because the swapped element 
                // coming from 'high' needs to be checked next!
            }
            
        }
    }
};