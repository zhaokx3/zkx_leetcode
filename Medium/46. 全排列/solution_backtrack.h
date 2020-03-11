#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& num) {
        vector<vector<int>> res;
        backtracking(num, 0, res);
        return res;
    }
    void backtracking(vector<int>& num, int start, vector<vector<int>>& res) {
        if (start >= num.size()) {
            res.push_back(num);
            return;
        }
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            backtracking(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};
