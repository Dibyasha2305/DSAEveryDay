class Solution {
public:
    void helper(int n, vector<int>& ans) {
        ans.push_back(n);
        
        if (n <= 0) {
            return; 
        }
        
        helper(n - 5, ans);
        
        ans.push_back(n); 
    }

    vector<int> pattern(int n) {
        vector<int> ans;
        helper(n, ans);
        return ans;
    }
};