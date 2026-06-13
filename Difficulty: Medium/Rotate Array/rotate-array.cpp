#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        
        if (n <= 1 || d == 0) return;
        
        d = d % n;
        
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};