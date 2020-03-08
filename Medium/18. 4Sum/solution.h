#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int>& nums, int target) {
        vector<vector<int> > ans;
        if (nums.size() < 4) return ans;
        
        sort(nums.begin(), nums.end());
        int max_threeSum = nums[nums.size()-3] + nums[nums.size()-2] + nums[nums.size()-1];
        int max_twoSum = nums[nums.size()-2] + nums[nums.size()-1];
        
        for (int i = 0; i < nums.size()-3; i++) {
        	if (i > 0 && nums[i] == nums[i-1]) continue; // skip duplicate x1
        	if (nums[i] + max_threeSum < target) continue; // upper bound
        	int cur_min_threeSum = nums[i+1] + nums[i+2] + nums[i+3];
        	if (nums[i] + cur_min_threeSum > target) break; // lower bound
        	
            int target_i = target - nums[i];
            
            // transform to three Sum
            for (int j = i+1; j < nums.size()-2; j++) {
            	if (j > i+1 && nums[j] == nums[j-1]) continue; // skip duplicate x2
            	if (nums[j] + max_twoSum < target_i) continue; // upper bound
            	int cur_min_twoSum = nums[j+1] + nums[j+2];
        		if (nums[j] + cur_min_twoSum > target_i) break; // lower bound
        		
        		// left and right pointer to sum two
        		int left = j+1;
        		int right = nums.size()-1;
        		vector<int> flag;
        		
        		while(left < right) {
        			int cur_fourSum = nums[i] + nums[j] + nums[left] + nums[right];
        			if (cur_fourSum == target) {
        				vector<int> t(4, 0);
                    	t[0] = nums[i];
                    	t[1] = nums[j];
                    	t[2] = nums[left];
                    	t[3] = nums[right];
                    	if (flag != t) ans.push_back(t); // skip duplicate x3,4
                    	flag = t;
                    	left++;
                    	right--;
					} else if (cur_fourSum < target) {
						left++;
					} else {
						right--;
					}
				}
			}
        }
        return ans;
    }
    
};

