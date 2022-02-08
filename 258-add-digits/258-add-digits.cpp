class Solution {
public:
    int sumofdigits(int& n){
        int c = 0;
        while(n>0){
            c+=n%10;
            n/=10;
        }
        return c;
    }
    int addDigits(int n) {
        while(n>=10){
            n = sumofdigits(n);
        }
        return n;
    }
};