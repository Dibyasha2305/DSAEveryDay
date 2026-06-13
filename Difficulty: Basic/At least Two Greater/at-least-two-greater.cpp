#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    vector<int> findElements(vector<int> arr) {
        sort(arr.begin(), arr.end());
        
        arr.pop_back();
        
        arr.pop_back();
        
        return arr;
    }
};