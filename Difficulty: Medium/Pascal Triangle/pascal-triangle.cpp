#include <vector>

using namespace std;

class Solution {
public:
    vector<int> nthRowOfPascalTriangle(int n) {
        long long mod = 1e9 + 7;
        
        if (n == 1) {
            return {1};
        }
        
        vector<int> prevRow = nthRowOfPascalTriangle(n - 1);
        
        vector<int> currentRow(n);
        
        currentRow[0] = 1;
        currentRow[n - 1] = 1;
        
        for (int i = 1; i < n - 1; i++) {
            currentRow[i] = (prevRow[i - 1] + prevRow[i]) % mod;
        }
        
        return currentRow;
    }
};