#include <vector>

using namespace std;

class Solution {
private:
    void dfs(int row, int col, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] != 'O') {
            return;
        }
        
        grid[row][col] = '#';
        
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};
        
        for (int i = 0; i < 4; i++) {
            dfs(row + delRow[i], col + delCol[i], grid);
        }
    }

public:
    void fill(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return;
        
        int n = grid.size();
        int m = grid[0].size();
        
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 'O') dfs(0, j, grid);
            if (grid[n - 1][j] == 'O') dfs(n - 1, j, grid);
        }
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 'O') dfs(i, 0, grid);
            if (grid[i][m - 1] == 'O') dfs(i, m - 1, grid);
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 'O') {
                    grid[i][j] = 'X'; 
                } else if (grid[i][j] == '#') {
                    grid[i][j] = 'O'; 
                }
            }
        }
    }
};