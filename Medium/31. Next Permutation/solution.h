#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) return;
        int flag = -1;
        for (int i = nums.size()-1; i > 0; i--) {
            if (nums[i] > nums[i-1]) {
                flag = i-1;
                break;
            }
        }
        if (flag == -1) {
            sort(nums.begin(), nums.end());
            return;
        }
        
        int t = nums[flag+1] - nums[flag], p = flag+1;
        for (int j = flag+1; j < nums.size(); j++) {
            if (nums[j] > nums[flag] && (nums[j]-nums[flag] < t)) p = j; 
        }
        
        // swap index "flag" and "p"
        int temp = nums[flag];
        nums[flag] = nums[p];
        nums[p] = temp;
        
        sort(nums.begin()+(flag+1), nums.end());
    }
};
