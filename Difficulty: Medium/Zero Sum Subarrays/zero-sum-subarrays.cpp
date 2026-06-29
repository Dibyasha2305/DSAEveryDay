class Solution {
public:
    int findSubarray(vector<int> &arr) {
        unordered_map<long long, int> mp;
        long long prefixSum = 0;
        int count = 0;

        // Prefix sum 0 occurs once before starting
        mp[0] = 1;

        for (int x : arr) {
            prefixSum += x;

            if (mp.find(prefixSum) != mp.end()) {
                count += mp[prefixSum];
            }

            mp[prefixSum]++;
        }

        return count;
    }
};