#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if (a.size() != b.size()) {
            return false;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        return a == b;
    }
};