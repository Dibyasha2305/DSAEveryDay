#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    void interchange(vector<vector<int>>& mat) {
        int rows = mat.size();
        
        if (rows == 0) return;
        
        int cols = mat[0].size();
        if (cols <= 1) return;
        for (int i = 0; i < rows; i++) {
            swap(mat[i][0], mat[i][cols - 1]);
        }
    }
};