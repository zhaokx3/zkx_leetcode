#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
#include<unordered_map> 
using namespace std;

class Solution {
public:
    double qpow(double a, long b) {
        double res = 1;
        while(b) {
            if(b & 1) res = res*a;
            b >>= 1;
            a *= a;
        }
        return res;
    } 
    
    double myPow(double x, long n) {
        if(n == 0) return 1;
        if(n > 0) return qpow(x,n);
        if(n < 0) return 1/qpow(x,-n);
        return 1;
    }
};
