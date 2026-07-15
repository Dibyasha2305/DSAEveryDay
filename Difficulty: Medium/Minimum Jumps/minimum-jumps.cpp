class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        // Edge cases
        if (n <= 1) return 0; // Already at the end
        if (arr[0] == 0) return -1; // Cannot move anywhere
        
        // Initialization
        int maxReach = arr[0]; 
        int steps = arr[0];    
        int jumps = 1;         
        
        // Iterate starting from the second element
        for (int i = 1; i < n; ++i) {
            // If we have reached the last index
            if (i == n - 1) {
                return jumps;
            }
            
            // Continuously update the furthest index we can reach
            maxReach = max(maxReach, i + arr[i]);
            
            // We use a step to move to the current element
            steps--;
            
            // If we've run out of steps for the current jump
            if (steps == 0) {
                jumps++; // Commit to another jump
                
                // If our current index is the maximum reach, we're stuck
                if (i >= maxReach) {
                    return -1;
                }
                
                // Refresh steps based on our newly established maximum reach
                steps = maxReach - i;
            }
        }
        
        return -1;
    }
};