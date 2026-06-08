#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    typedef pair<int, pair<int, int>> Node;

    vector<int> mergeArrays(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> result;
        priority_queue<Node, vector<Node>, greater<Node>> minHeap;
        
        for (int i = 0; i < n; i++) {
            minHeap.push({mat[i][0], {i, 0}});
        }
        while (!minHeap.empty()) {
            Node current = minHeap.top();
            minHeap.pop();
            
            int val = current.first;
            int row = current.second.first;
            int col = current.second.second;
            
            result.push_back(val);
            
            if (col + 1 < m) {
                minHeap.push({mat[row][col + 1], {row, col + 1}});
            }
        }
        
        return result;
    }
};