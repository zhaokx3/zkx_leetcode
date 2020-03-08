# 问题描述

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., `[0,1,2,4,5,6,7]` might become `[4,5,6,7,0,1,2]`).

You are given a target value to search. If found in the array return its index, otherwise return `-1`.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of *O*(log *n*).

**Example 1:**

```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

```

**Example 2:**

```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

# 思路(C++)

考察点：二分查找法

由于递增数组经过了一次旋转，所以在二分查找时需要依据拐点在哪个区间来缩小搜索范围，具体地：

- 拐点在左半支（右半支递增）

  ```c++
  if (target >= nums[mid] && target <= nums[right]) {
  	left = mid+1;
  } else {
      right = mid-1;
  }
  ```

- 拐点在右半支（左半支递增）

  ```c++
  if (target >= nums[left] && target <= nums[mid]) {
      right = mid-1;
  } else {
      left = mid+1;
  }
  ```

## Python

待完成......

## 参考解法

待完成......