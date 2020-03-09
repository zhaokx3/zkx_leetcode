# 问题描述

Given an array of integers `nums` sorted in ascending order, find the starting and ending position of a given `target` value.

Your algorithm's runtime complexity must be in the order of *O*(log *n*).

If the target is not found in the array, return `[-1, -1]`.

**Example 1:**

```
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
```

**Example 2:**

```
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
```

# 思路(C++)

考察点：二分查找法

该题为典型的二分查找题，具体分两步完成：

1. 二分查找找出原数组中是否含有target，如果没有，返回`{-1,-1}`，如果找到，转到第二步；
2. 以当前找到的索引为分割点，在左半支二分查找下界，右半支二分查找上界。

## Python

待完成......

## 参考解法

待完成......