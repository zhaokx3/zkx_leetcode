#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        if (n < 1) return ans;
        if (n == 1) {
            ans.push_back("()");
            return ans;
        }
        int th = n-1;
        int a[2*th];
        int b[th];
        for (int i = 0; i < 2*th; i++) a[i] = i;
        
        vector<vector<int> > combines;
        getCombines(a, b, 2*th, th, th, combines);
        
        for (int j = 0; j < combines.size(); j++) {
            string s = "(";
            int flag = 0;
            for (int k = 0; k < 2*th; k++) {
                if (flag < th && combines[j][flag] == k) {
                    s += '(';
                    flag++;
                } else {
                    s += ')';
                }
            }
            s += ")";
            if(isValid(s)) ans.push_back(s);
        }
        return ans;
    }
    
    
private:
     void getCombines(const int a[], int b[], int n, int m, int M, vector<vector<int> >& combines) {
        if (m > 0) {
            for (int i = n; i >= m; i--) {
                b[m-1] = a[i-1];
                //由于确定了当前位置的值, 则下次递归c(n-1,m-1)
                getCombines(a, b, i-1, m-1, M, combines);
            }
        } else {
            vector<int> t(b, b+M);
            combines.push_back(t);
        }
    }
    
    bool isValid(string a) {
        stack<char> st;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '(') st.push('(');
            else {
                if (!st.empty()) st.pop();
                else return false;
            }
        }
        if (st.empty()) return true;
        return false;
    }
};

