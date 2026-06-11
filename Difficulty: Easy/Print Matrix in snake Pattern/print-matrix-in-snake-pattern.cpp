#include <vector>

using namespace std;

class Solution {
public:
    vector<int> snakePattern(vector<vector<int>>& matrix) {
        vector<int> result;
        int n = matrix.size(); 
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    result.push_back(matrix[i][j]);
                }
            } 
            else {
                for (int j = n - 1; j >= 0; j--) {
                    result.push_back(matrix[i][j]);
                }
            }
        }
        
        return result;
    }
};