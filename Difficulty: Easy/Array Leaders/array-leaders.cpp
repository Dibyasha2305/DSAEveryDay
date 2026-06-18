#include <vector>
#include <algorithm> // Make sure algorithm is included for std::reverse
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();
        
        if (n == 0) return result;
        
        int max_from_right = arr[n - 1];
        result.push_back(max_from_right);
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                result.push_back(arr[i]);
                max_from_right = arr[i];
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};