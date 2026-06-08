#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int nonZeroIndex = 0; 
        
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[nonZeroIndex]);
                nonZeroIndex++;
            }
        }
    }
};