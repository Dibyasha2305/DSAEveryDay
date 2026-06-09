#include <iostream>

using namespace std;

class Solution {
public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        if (n == 0) {
            return 0;
        }
        
        int totalMoves = 0;
        
        totalMoves += towerOfHanoi(n - 1, from, aux, to);
        
        totalMoves += 1;
        totalMoves += towerOfHanoi(n - 1, aux, to, from);
        
        return totalMoves;
    }
};