class Solution {
public:
    int countPairs(vector<int> &arr, int target) {
        int n = arr.size();
        int left = 0, right = n - 1;
        long long ans = 0;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum < target) {
                left++;
            }
            else if (sum > target) {
                right--;
            }
            else {
                if (arr[left] == arr[right]) {
                    long long cnt = right - left + 1;
                    ans += cnt * (cnt - 1) / 2;
                    break;
                }

                long long cntLeft = 1, cntRight = 1;

                while (left + 1 < right && arr[left] == arr[left + 1]) {
                    cntLeft++;
                    left++;
                }

                while (right - 1 > left && arr[right] == arr[right - 1]) {
                    cntRight++;
                    right--;
                }

                ans += cntLeft * cntRight;
                left++;
                right--;
            }
        }

        return ans;
    }
};