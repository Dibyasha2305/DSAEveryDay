#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        bool flag;
        
        for (int i = 0; i < n - 1; i++) {
            flag = false;
            
            for (int j = 0; j < n - i - 1; j++) {
                
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
        }
    }
};