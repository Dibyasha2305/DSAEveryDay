class Solution {
public:
    string removeOuter(string& s) {
        string result = "";
        int depth = 0;
        
        for (char c : s) {
            if (c == '(') {
                // If depth > 0, it means we are already inside an outer shell.
                // Therefore, this '(' is an inner bracket. Keep it!
                if (depth > 0) {
                    result += c;
                }
                depth++; // We step one level deeper
                
            } else if (c == ')') {
                depth--; // We step one level outward
                
                // If depth is still > 0 after stepping outward, 
                // it means we haven't reached the absolute outside yet. Keep it!
                if (depth > 0) {
                    result += c;
                }
            }
        }
        
        return result;
    }
};