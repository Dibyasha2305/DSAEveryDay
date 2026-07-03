class Solution {
public:
    string removeDuplicates(string &s) {
        vector<bool> vis(256, false);
        string ans = "";

        for (char c : s) {
            if (!vis[c]) {
                vis[c] = true;
                ans += c;
            }
        }

        return ans;
    }
};