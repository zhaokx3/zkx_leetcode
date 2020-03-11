# 问题描述

给定一个数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。

candidates 中的每个数字在每个组合中只能使用一次。

说明：

所有数字（包括目标数）都是正整数。
解集不能包含重复的组合。 
示例 1:

```
输入: candidates = [10,1,2,7,6,1,5], target = 8,
所求解集为:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
```

示例 2:

```
输入: candidates = [2,5,2,1,2], target = 5,
所求解集为:
[
  [1,2,2],
  [5]
]
```

# 思路(C++)

[39. 组合总和](../39.%20组合总和) 的扩展，但由于条件的约束，有几点需考虑。

由于每个数字在每个组合中只能使用一次，所以递归的`next_candidates` 由`cur_candidates(begin()+i,···,end())` 变为`cur_candidates(begin()+i+1,···,end())`，由此带来一个问题，即当`i == cur_candidates.size()-1` 时，`next_candidates is empty` 所以此时要停止递归，及时return。

此外，由于原`candidates` 中含有重复元素，故为了去重，每层递归中只需考虑最开始出现的元素，即跳过重复元素。

## Python

待完成......

## 参考解法

待完成......