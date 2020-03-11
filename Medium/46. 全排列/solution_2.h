#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() == 0) return ans;
        if (nums.size() == 1) {
            ans.push_back(nums);
            return ans;
        }
        for (int i = 0; i < nums.size(); i++) {
            vector<int> cur_nums(nums);
            vector<vector<int>> cur_ans;
            cur_nums.erase(cur_nums.begin()+i);
            cur_ans = permute(cur_nums);
            for (int j = 0; j < cur_ans.size(); j++) {
                cur_ans[j].insert(cur_ans[j].begin(), nums[i]);
                ans.push_back(cur_ans[j]);
            }
        }
        return ans;
    }
};
