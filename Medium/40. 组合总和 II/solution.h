#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> cur;
        dfs(candidates, cur, target, ans);
        return ans;
    }

private:
    void dfs(vector<int>& cur_candidates,
            vector<int>& cur, 
            int cur_target, 
            vector<vector<int>>& ans) {
        if (cur_target == 0) {
            ans.push_back(cur);
            return;
        }
        if (cur_candidates.empty()) return;
        if (cur_target < cur_candidates[0]) return;
        for (int i = 0; i < cur_candidates.size(); i++) {
            if (i > 0 && cur_candidates[i] == cur_candidates[i-1]) continue;
            cur.push_back(cur_candidates[i]);
            vector<int> next_candidates(cur_candidates.begin()+i+1, cur_candidates.end());
            dfs(next_candidates, cur, cur_target-cur_candidates[i], ans);
            cur.pop_back();
        }
    }
};
