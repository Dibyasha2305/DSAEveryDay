class Solution {
public:
    bool isRotated(string& s1, string& s2) {
        if (s1.length() != s2.length())
            return false;

        int n = s1.length();

        // For strings of length <= 2
        if (n <= 2)
            return s1 == s2;

        // Clockwise rotation by 2
        string cw = s1.substr(n - 2) + s1.substr(0, n - 2);

        // Anti-clockwise rotation by 2
        string acw = s1.substr(2) + s1.substr(0, 2);

        return (s2 == cw || s2 == acw);
    }
};