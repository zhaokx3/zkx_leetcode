# 问题描述

Given an array `nums` of *n* integers and an integer `target`, are there elements *a*, *b*, *c*, and *d* in `nums` such that *a* + *b* + *c* + *d* = `target`? Find all unique quadruplets in the array which gives the sum of `target`.

**Note:**

The solution set must not contain duplicate quadruplets.

**Example:**

```
Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]
```



# 思路(C++)

降解问题，即4Sum->3Sum->2Sum, 所以需要三层循环，时间复杂度为O(n^3)

小trick：

- 首先sort排序；
- 每层都要考虑重复是否会出现重复“quadruplet”，即去重；
- 每层都考虑上下边界（当前最小/最大4Sum与target的关系）可以明显降低运行时间；



1. 判断一个字符串是否为“unique characters”
    方法：遍历string，并对i索引的字符在(i+1, s.len)查找是否重复；
2. 找出给定vector<string> arr的“sub-sequence”数(组合问题，2^n)
   ​

## Python

待完成......

## 参考解法

待完成......