# 问题描述

给定一个 n × n 的二维矩阵表示一个图像。

将图像顺时针旋转 90 度。

说明：

你必须在原地旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要使用另一个矩阵来旋转图像。

示例 1:

```c++
给定 matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],
原地旋转输入矩阵，使其变为:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
```

示例 2:

```c++
给定 matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 
原地旋转输入矩阵，使其变为:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]
```

# 思路(C++)

每四个点依次轮换位置，如`(0,0)->(0,n-1)->(n-1,n-1)->(n-1,0)->(0,0)` ， 任意前后旋转坐标索引的规律为：`(i,j)->(j,n-1-i)` ，最外层需要轮换的列为`0->n-1` ， 次外层为`1->n-2` ......，直到n/2层结束即可。

## Python

待完成......

## 参考解法

待完成......