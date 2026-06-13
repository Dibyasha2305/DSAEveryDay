#include <vector>

using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {
        if (arr.empty()) return arr;
        
        vector<int> uniqueElements;
        uniqueElements.push_back(arr[0]);
        
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] != arr[i - 1]) {
                uniqueElements.push_back(arr[i]);
            }
        }
        
        return uniqueElements;
    }
};