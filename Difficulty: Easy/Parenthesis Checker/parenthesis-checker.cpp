#include <stack>
#include <string>

using namespace std;

class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        
        for (char ch : s) {
            // 1. If it's an opening bracket, push it onto the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            // 2. If it's a closing bracket, evaluate it against the top of the stack
            else {
                // If the stack is empty, there is no corresponding opening bracket
                if (st.empty()) {
                    return false;
                }
                
                char top = st.top();
                st.pop(); // Remove the top element
                
                // 3. Check for a mismatch
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        // 4. If the stack is empty at the end, everything was perfectly balanced
        return st.empty();
    }
};