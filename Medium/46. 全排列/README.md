# 问题描述

给定一个没有重复数字的序列，返回其所有可能的全排列。

示例:

```
输入: [1,2,3]
输出:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
```

# 思路(C++)

全排列问题和N皇后问题都属于典型的回溯算法，详解强烈参考[回溯算法](https://leetcode-cn.com/problems/permutations/solution/hui-su-suan-fa-xiang-jie-by-labuladong-2/)， 回溯与DFS思路相似，回溯法可以被认为是一个有过剪枝的DFS过程，这里直接贴出回溯算法的一般框架：

```c++
result = []
def backtrack(路径, 选择列表):
    if 满足结束条件:
        result.add(路径)
        return
    
    for 选择 in 选择列表:
        做选择
        backtrack(路径, 选择列表)
        撤销选择
```

其中：

1. 路径：也就是已经做出的选择。


2. 选择列表：也就是你当前可以做的选择。
3. 结束条件：也就是到达决策树底层，无法再做选择的条件。

此外，在做选择之前可以使用if判断语句进一步剪枝。

对于无重复的全排列问题，设一组数p = {r1, r2, r3, ... ,rn}, 全排列为perm(p)，pn = p - {rn}。因此perm(p) = r1perm(p1), r2perm(p2), r3perm(p3), ... , rnperm(pn)。当n = 1时perm(p} = r1。为了更容易理解，将整组数中的所有的数分别与第一个数交换，这样就总是在处理后n-1个数的全排列。所以此时的“做选择”即为`swap(num[start], num[i])` ，回溯为`backtracking(num, start + 1, res)` ， “撤销选择”为`swap(num[start], num[i])` 

## Python

待完成......

## 参考解法

待完成......