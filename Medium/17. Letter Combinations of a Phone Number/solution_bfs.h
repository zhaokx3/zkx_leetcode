#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> table = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
//        string cur;
        vector<string> ans;
        
        bfs(digits, table, ans);
        return ans;
    }
    
private:
    void bfs(const string& digits,
            const vector<string>& table,
            vector<string>& ans) {
        
		queue<string> q;
		string cur;
        q.push("");
        
        while(!q.empty()) {
        	cur = q.front();
        	q.pop()
        	
        	if (cur.length() == digits.length()) {
        		ans.push_back(cur);
			} else {
				int index = digits[cur.length()] - '0';
				for (auto a:table[index]) {
					q.push(cur+a);
				}
			}
		}
    }
};

