class Solution {
public:
    int findElement(vector<int> &arr) {
        int n = arr.size();

        vector<int> rightMin(n);
        rightMin[n - 1] = arr[n - 1];

        // Suffix minimum array
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(arr[i], rightMin[i + 1]);
        }

        int leftMax = arr[0];

        // Check middle elements
        for (int i = 1; i < n - 1; i++) {
            if (leftMax <= arr[i] && arr[i] <= rightMin[i + 1]) {
                return arr[i];
            }
            leftMax = max(leftMax, arr[i]);
        }

        return -1;
    }
};