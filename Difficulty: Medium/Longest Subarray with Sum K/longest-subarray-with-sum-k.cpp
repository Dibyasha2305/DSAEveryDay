#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> prefixMap;
        long long sum = 0; // to prevent integer overflow
        int maxLength = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            // Case 1: prefix itself is exactly k
            if (sum == k) {
                maxLength = max(maxLength, i + 1);
            }
            
            // Case 2: have seen (sum - k) before
            long long remainder = sum - k;
            if (prefixMap.find(remainder) != prefixMap.end()) {
                int length = i - prefixMap[remainder];
                maxLength = max(maxLength, length);
            }
            
            // Store the current sum in the map IF it's not already there
            if (prefixMap.find(sum) == prefixMap.end()) {
                prefixMap[sum] = i;
            }
        }
        
        return maxLength;
    }
};