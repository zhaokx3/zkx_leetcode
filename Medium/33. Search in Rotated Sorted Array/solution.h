#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int mid, ans = -1;
        
        while (left <= right) {
        	
        	mid = (left+right)/2;
            if (target == nums[mid]) return mid;
            
            if (nums[mid] <= nums[right]) {  // �յ������֧���Ұ�֧������
                if (target >= nums[mid] && target <= nums[right]) {
                    left = mid+1;
                } else {
                    right = mid-1;
                }
            } else {  // �յ����Ұ�֧�����֧������
                if (target >= nums[left] && target <= nums[mid]) {
                    right = mid-1;
                } else {
                    left = mid+1;
                }
            }
        }
        return ans;
    }
};
