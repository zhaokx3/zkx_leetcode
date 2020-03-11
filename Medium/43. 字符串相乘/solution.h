#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int max_bits = num1.length() + num2.length();
        int a[max_bits] = {0};
        for (int i = 0; i < num1.length(); i++) {
            for (int j = 0; j < num2.length(); j++) {
                int b1 = num1.length() - i - 1;
                int b2 = num2.length() - j - 1;
                int cur_result = (num1[i]-'0') * (num2[j]-'0');
                a[b1+b2] += cur_result;
            }
        }
        
        int to_next = 0, max_b = 0;
        string ans = "";
        for (int k = 0; k < max_bits; k++) {
            a[k] += to_next;
            to_next = a[k] / 10;
            a[k] %= 10;
            if (a[k] > 0) max_b = k;
        }
        for (int i = max_b; i >= 0; i--) {
            ans += (a[i]+'0');
        }
        return ans;
    }
};
