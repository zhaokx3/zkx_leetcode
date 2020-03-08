#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; // overflow
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; // 异或nor, 同号为1，异号为-1
        long m = labs(dividend), n = labs(divisor), ans = 0;
        if (m < n) return ans;
        if (n == 1) return (sign == 1) ? m : -m;
        ans = getDivide(m, n);
        return (sign == 1) ? ans : -ans;
    }

private:
    long getDivide(long m, long n){
        if (m < n) return 0;
        long t = n, p = 1;
        while (m >= (t << 1)) {
            t <<= 1;
            p <<= 1;
        }
        m -= t;
        return p+getDivide(m, n);
    }
};
