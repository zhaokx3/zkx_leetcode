#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& num) {
        sort(num.begin(), num.end());
        vector<vector<int>> res;
        backtracking(num, 0, res);
        return res;
    }
    void backtracking(vector<int>& num, int start, vector<vector<int>>& res) {
        if (start >= num.size()) {
            res.push_back(num);
            return;
        }

        //枚举的时候去重，只考虑没有排过的
        unordered_set<int> uniq;
        for (int i = start; i < num.size(); ++i) {
            if (uniq.count(num[i])) {
                continue; //already used
            }
            // if (i > start && num[i] == num[i-1]) continue;
            swap(num[start], num[i]);
            backtracking(num, start + 1, res);
            swap(num[start], num[i]);
            uniq.insert(num[i]);
        }
    }
};
