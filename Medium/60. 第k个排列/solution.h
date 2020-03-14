
class Solution {
public:
    string getPermutation(int n, int k) {
        if (n == 1) return "1";
        string cur, s;
        int a[10] = {0};
        for (int i = 1; i <= n; i++) {
             s += (i+'0');
             a[i] = Fac(i);
        }
        getKth(s, a, n, k, 0, a[n-1], cur);
        return cur;
    }

    void getKth(const string& s, 
                const int (&a)[10], 
                const int& n, 
                const int& k,
                int start, int sec, string& cur) {
        string toUse = s;
        if (cur.length() > 0) {
            for (int i = 0; i < cur.length(); i++) {
            	int pos = toUse.find(cur[i]);
                if (pos != string::npos) toUse.erase(pos, 1);
            }
        }
        if (cur.length() >= n-1) {
            cur.push_back(toUse[0]);
            return;
        }
        int s_new, j;
        for (j = 0; j < toUse.length(); j++) {
            if (k <= (start+(j+1)*sec)) break;
        }
        cur.push_back(toUse[j]);
        getKth(s, a, n, k, start+j*sec, a[toUse.length()-2], cur);
    }

    int Fac(int n) {
        if (n == 1) return 1;
        else return n * Fac(n-1);
    }
};
