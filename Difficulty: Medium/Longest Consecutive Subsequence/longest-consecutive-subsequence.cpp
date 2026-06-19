#include <vector>
#include <unordered_set>
#include <algorithm> // Required for std::max

using namespace std;

class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // 1. Throw all elements into a Hash Set for instant lookups
        unordered_set<int> numSet(arr.begin(), arr.end());
        int longestStreak = 0;
        
        // 2. Iterate through the unique numbers in the set
        for (int num : numSet) {
            
            // 3. ONLY start counting if 'num' is the beginning of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                
                int currentNum = num;
                int currentStreak = 1;
                
                // 4. Count upwards to see how long the streak goes
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                // 5. Update our overall maximum
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        
        return longestStreak;
    }
};