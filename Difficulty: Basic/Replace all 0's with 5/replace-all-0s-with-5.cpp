#include <string>

using namespace std;

class Solution {
  public:
    int convertFive(int n) {
        if (n == 0) {
            return 5;
        }
        
        string str = to_string(n);
        
        for (char &c : str) {
            if (c == '0') {
                c = '5';
            }
        }
        
        return stoi(str);
    }
};