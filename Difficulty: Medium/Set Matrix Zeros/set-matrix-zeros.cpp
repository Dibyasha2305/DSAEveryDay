#include <vector>

using namespace std;

class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        // This variable tracks if the very first column needs to be zeroed
        int col0 = 1;

        // STEP 1: Scan the matrix and drop markers in the first row and first column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    // Mark the i-th row
                    mat[i][0] = 0;
                    
                    // Mark the j-th column
                    if (j == 0) {
                        col0 = 0; // Special case for the first column
                    } else {
                        mat[0][j] = 0;
                    }
                }
            }
        }

        // STEP 2: Update the inner matrix using our dropped markers
        // Notice we start at index 1 to leave the marker row/col untouched for now
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                // If the row marker OR the column marker is 0, this cell becomes 0
                if (mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }

        // STEP 3: Finally, update the first row and first column if needed
        // We must check the row first!
        if (mat[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                mat[0][j] = 0;
            }
        }
        
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                mat[i][0] = 0;
            }
        }
    }
};