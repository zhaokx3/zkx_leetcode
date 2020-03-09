# 问题描述

给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。

candidates 中的数字可以无限制重复被选取。

说明：

所有数字（包括 target）都是正整数。
解集不能包含重复的组合。 
示例 1:

```
输入: candidates = [2,3,6,7], target = 7,
所求解集为:
[
  [7],
  [2,2,3]
]
```

示例 2:

```
输入: candidates = [2,3,5], target = 8,
所求解集为:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]
```



# 思路(C++)

DFS， 类似于[17. Letter Combinations of a Phone Number](Medium/17.%20Letter%20Combinations%20of%20a%20Phone%20Number) ，但是此处节点元素储存`cur_target`，边信息为			`cur_candidates` 中的每个元素。其中，每个节点的`cur_target` 等于`last_target-cur_candidates[i]`，`cur_candidates = last_candidates(begin()+i,···,end())` （原始candidates已增序排列）。 当`cur_target==0` 时，递归结束并添加此路径。 

## Python

待完成......

## 参考解法

待完成......