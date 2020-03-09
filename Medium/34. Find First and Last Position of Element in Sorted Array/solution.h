#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        vector<int> ans(2,-1);
        
        while (left <= right) {
            mid = (left+right)/2;
            if (nums[mid] == target) break;
            else if (nums[mid] > target) right = mid-1;
            else left = mid+1;
        }
        
        if (left > right) return ans;
        
        int lower = left, upper = right;
        
        // search lower bound 
        int l1 = left, r1 = mid, m1;
        while(l1 < r1 && nums[l1] < nums[r1]) {
            m1 = (l1+r1)/2;
            if (nums[m1] == target && nums[m1-1] < target) {
                lower = m1;
                break;
            } else if (nums[m1] < target) {
                l1 = m1+1;
            } else {
                r1 = m1;
            }
        }
        if (l1 == r1 || nums[l1] == nums[r1]) lower = l1;
        
        // search upper bound
        int l2 = mid, r2 = right, m2;
        while(l2 < r2 && nums[l2] < nums[r2]) {
            m2 = (l2+r2)/2;
            if (nums[m2] == target && nums[m2+1] > target) {
                upper = m2;
                break;
            } else if (nums[m2] > target) {
                r2 = m2-1;
            } else {
                l2 = m2;
            }
        }
        if (l2 == r2 || nums[l2] == nums[r2]) upper = r2;
        
        ans[0] = lower;
        ans[1] = upper;
        return ans;
    }
};

