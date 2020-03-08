# 问题描述

Given *n* pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given *n* = 3, a solution set is:

```
[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]
```

# 思路(C++)


1. 判断有多少种可能的形式，组合问题: C(2(n-1), n-1)

   构造函数计算C(n, m)的所有组合形式，如C(4,2)=(23,13,03,12,02,02)

2. 利用栈判断特定形式的括号对是否有效。

   ​

## Python

待完成......

## 参考解法

待完成......