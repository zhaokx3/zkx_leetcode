#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<vector<char>> chess(10);
        chess[0] = {' '};
        chess[1] = {};
        chess[2] = {'a', 'b', 'c'};
        chess[3] = {'d', 'e', 'f'};
        chess[4] = {'g', 'h', 'i'};
        chess[5] = {'j', 'k', 'l'};
        chess[6] = {'m', 'n', 'o'};
        chess[7] = {'p', 'q', 'r', 's'};
        chess[8] = {'t', 'u', 'v'};
        chess[9] = {'w', 'x', 'y', 'z'};
        
        string cur;
        vector<string> ans;
        
        dfs(digits, chess, 0, cur, ans);
        return ans;
    }
    
private:
    void dfs(const string& digits,
            const vector<vector<char>>& chess,
            int cur_l,
            string& cur,
            vector<string>& ans) {
        if (cur_l == digits.length()) {
            ans.push_back(cur);
            return;
        }
        
        for (const char c: chess[digits[cur_l] - '0']) {
            cur.push_back(c);
            dfs(digits, chess, cur_l+1, cur, ans);
            cur.pop_back();
        }
    }
};

