
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if (intervals.size() == 0) return ans;
        sort(intervals.begin(), intervals.end());
        int left = intervals[0][0], right = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= right) {
                right = max(intervals[i][1], right);
            } else {
                vector<int> t;
                t.push_back(left);
                t.push_back(right);
                ans.push_back(t);
                left = intervals[i][0];
                right = intervals[i][1];
            }
        }
        // 添加最后一个区间
        vector<int> t;
        t.push_back(left);
        t.push_back(right);
        ans.push_back(t);
        return ans;
    }
};
