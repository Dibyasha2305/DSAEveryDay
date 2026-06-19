#include <vector>

using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int candidate = -1;
        int count = 0;
        
        // Phase 1: Find the candidate (The Battlefield)
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            } else if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        // Phase 2: Verify the candidate
        int actual_count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == candidate) {
                actual_count++;
            }
        }
        
        // Check if the candidate actually holds the majority
        if (actual_count > n / 2) {
            return candidate;
        } else {
            return -1;
        }
    }
};