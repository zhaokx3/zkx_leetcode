#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
#include<unordered_map> 
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if (strs.size() == 0) return ans;
        unordered_map<string, int> m;
        int index = 0;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if (m.count(s)) {
                ans[m[s]].push_back(strs[i]);
            } else {
                vector<string> t;
                t.push_back(strs[i]);
                ans.push_back(t);
                m[s] = index;
                index++;
            }
        }
        return ans;
    }
};
