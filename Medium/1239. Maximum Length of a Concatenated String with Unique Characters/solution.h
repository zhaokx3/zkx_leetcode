#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxLength(vector<string>& arr) {
        int maxl = 0, com_num = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (!isUnique(arr[i]))
                arr.erase(arr.begin()+i);
        }
        com_num = pow(2, arr.size());
        for (int i = 1; i < com_num; i++) {
            string temp = "";
            int tag = i;
            for (int j = arr.size()-1; j >= 0; j--) {
                if (pow(2, j) > tag) continue;
                if (tag / int(pow(2, j))) {
                    temp += arr[j];
                    tag -= pow(2, j);
                }
            }
            if (isUnique(temp) && temp.length() > maxl) maxl = temp.length();
        }
        return maxl;
    }
    
    bool isUnique(string s) {
        if (s.length() <= 1) return true;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.find(s[i], i+1) != string::npos)
                return false;
        }
        return true;
    }
};
