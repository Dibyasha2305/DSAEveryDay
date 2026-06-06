class Solution {
  public:
    int sumOfDigits(int n) {
        if(n>0){
            int x=n%10;
            return sumOfDigits(n/10)+x;
        }
        return 0;
    }
};