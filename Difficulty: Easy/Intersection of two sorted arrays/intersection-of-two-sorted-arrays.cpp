#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector<int> ans;
        int i = 0, j = 0;
        int n = arr1.size(), m = arr2.size();
        while (i < n && j < m) {
            
            if (arr1[i] < arr2[j]) {
                i++; 
            } 
            else if (arr1[i] > arr2[j]) {
                j++; 
            } 
            else {
                if (ans.empty() || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        
        return ans;
    }
};