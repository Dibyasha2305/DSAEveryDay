
class Solution {
  public:
    void helper(int ones, int zeros, int n, string current_str, vector<string>& ans) {
        
    if (current_str.length() == n) {
        ans.push_back(current_str);
        return;
    }
    
    helper(ones + 1, zeros, n, current_str + "1", ans);
    
    
    if (ones > zeros) {
        
        helper(ones, zeros + 1, n, current_str + "0", ans);
    }
}
    vector<string> NBitBinary(int n) {
    vector<string> ans;
    helper(0, 0, n, "", ans);
    
    return ans;
}
};