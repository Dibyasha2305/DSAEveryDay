#include <vector>

using namespace std;

class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& arr) {
        
        int n = arr.size();
        int m = arr[0].size();
        
        int max_row_index = -1;
        
        int i = 0;
        int j = m - 1;
        
        while (i < n && j >= 0) {
            if (arr[i][j] == 1) {
                max_row_index = i;
                j--;
            } else {
                i++;
            }
        }
        
        return max_row_index;
    }
};