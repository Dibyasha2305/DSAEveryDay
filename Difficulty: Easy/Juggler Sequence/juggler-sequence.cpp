class Solution {
  public:
    
    void helper(long long n, vector<long long>& ans) {
    
    ans.push_back(n);
    
    if (n == 1) {
        return;
    }
    
    if (n % 2 == 0) {
        helper(floor(pow(n, 0.5)), ans);
    } else {
        helper(floor(pow(n, 1.5)), ans);
    }
}
    vector<long long> jugglerSequence(long long n) {
        vector <long long> ans;
        helper(n, ans);
        return ans;
    }
};