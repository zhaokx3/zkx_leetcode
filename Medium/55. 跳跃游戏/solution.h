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
    bool canJump(vector<int>& nums) {
        if (nums.size() <= 1) return true;
        return jump(nums, nums.size()-1);
    }

    bool jump(vector<int>& nums, int end) {
        if (end <= 1) {
            if (nums[0] > 0) return true;
            return false;
        }		
        if (jump(nums, end-1)) {
            if (nums[end-1] > 0) return true;
            else {
                int i = end-2;
                while(i >= 0) {
                    if (nums[i] > end-1-i) return true;
                    i--;
                }
            }
        }
        return false;
    }
};
