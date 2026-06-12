#include <vector>

using namespace std;

class Solution {
public:
    bool isToeplitz(vector<vector<int>>& mat) {
        int rows = mat.size();
        
        if (rows == 0) return true; 
        
        int cols = mat[0].size();
        
        for (int i = 0; i < rows - 1; i++) {
            for (int j = 0; j < cols - 1; j++) {
                
                if (mat[i][j] != mat[i + 1][j + 1]) {
                    return false;
                }
            }
        }
        
        return true;
    }
};