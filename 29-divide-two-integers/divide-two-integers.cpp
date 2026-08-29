class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;
        bool sign = true;
        if (dividend >= 0 && divisor < 0)
            sign = false;
        else if (dividend < 0 && divisor > 0)
            sign = false;
        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);
        long long quotient = 0;
        while (n >= d) {
            int cnt = 0;
            // Find the largest power of 2 that can be multiplied with d
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }
// Add 2^cnt to quotient
            quotient += (1LL << cnt);
// Subtract d * 2^cnt from n
            n -= (d << cnt);
        }
        if (quotient > INT_MAX && sign)
            return INT_MAX;

        if (quotient > INT_MAX && !sign)
            return INT_MIN;

        return sign ? (int)quotient : -(int)quotient;
    }
};