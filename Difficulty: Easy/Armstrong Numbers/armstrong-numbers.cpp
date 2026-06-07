class Solution {
public:
    bool armstrongNumber(int n) {

        int dup = n;
        int sum = 0;
        int cnt = 0;

        while(dup > 0) {
            cnt++;
            dup /= 10;
        }

        dup = n;

        while(dup > 0) {

            int d = dup % 10;

            sum += pow(d, cnt);

            dup /= 10;
        }

        return sum == n;
    }
};