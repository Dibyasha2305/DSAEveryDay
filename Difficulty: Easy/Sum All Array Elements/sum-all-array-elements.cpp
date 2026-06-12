#include <vector>

using namespace std;

class Solution {
public:
    int arraySum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i]; 
        }
        
        return sum;
    }
};