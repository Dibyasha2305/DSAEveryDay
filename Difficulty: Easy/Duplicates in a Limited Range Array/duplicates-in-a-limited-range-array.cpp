class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        
        for (int x : arr) {
            if (arr[abs(x) - 1] < 0)
                ans.push_back(abs(x));
            else
                arr[abs(x) - 1] *= -1;
        }
        
        return ans;
    }
};