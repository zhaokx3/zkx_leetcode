# 问题描述

给定一个包含 m x n 个元素的矩阵（m 行, n 列），请按照顺时针螺旋顺序，返回矩阵中的所有元素。

示例 1:

```c++
输入:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
输出: [1,2,3,6,9,8,7,4,5]
```

示例 2:

```c++
输入:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
输出: [1,2,3,4,8,12,11,10,9,5,6,7]
```



# 思路(C++)

从最外围开始，将矩阵看成一个个圈，则圈的层数为min((m+1)/2, (n+1)/2)， 每层的标识为四元组的边界，即（row_start, col_start, row_end, col_end）。逐一遍历每层, 当遇到只剩一行（一列）的特殊情况时，依次插入ans中，这也说明此层为最后一层，遍历完成；否则，按顺时针四条边依次插入到ans中即可。

## Python

待完成......

## 参考解法

待完成......