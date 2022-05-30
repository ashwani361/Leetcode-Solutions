class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dividend_ = dividend, divisor_ = divisor;

        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        dividend_ = abs(dividend_);
        divisor_ = abs(divisor_);

        long long quotient = 0;   

        for (int i = 31; i >= 0; --i) {
            if (dividend_ - (divisor_ << i) >= 0) {
                dividend_ -= (divisor_ << i) ;
                quotient += 1LL << i;
            }

            if (dividend_ == 0)
                break; 
        }

        long long res = sign * quotient;
        if (res == 2147483648)
            res--; 

        return res;
    }
};