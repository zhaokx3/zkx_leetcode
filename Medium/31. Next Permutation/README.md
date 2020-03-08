# 问题描述

Implement **next permutation**, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be **in-place** and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

`1,2,3` → `1,3,2`
`3,2,1` → `1,2,3`
`1,1,5` → `1,5,1`

# 思路(C++)

从后往前遍历vector， 找到第一个增序对，即`nums[i]<nums[i+1]`；如果不能找到则说明此vector已为最大字典序的排列。记此处索引为p1，再在p1后面找比`nums[p1]`  大但是最接近它的元素，记索引为p2，交换p1和p2所对应的元素，最后将p1后面的元素增序排列即可。

## Python

待完成......

## 参考解法

待完成......