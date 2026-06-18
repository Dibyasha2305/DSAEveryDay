class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            int current_sum = arr[left] + arr[right];
            
            if (current_sum == target) {
                return {left + 1, right + 1};
            }
            else if (current_sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {-1, -1};
    }
};