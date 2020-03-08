# 问题描述

Given two integers `dividend` and `divisor`, divide two integers without using multiplication, division and mod operator.

Return the quotient after dividing `dividend` by `divisor`.

The integer division should truncate toward zero.

**Example 1:**

```
Input: dividend = 10, divisor = 3
Output: 3
```

**Example 2:**

```
Input: dividend = 7, divisor = -3
Output: -2
```

**Note:**

- Both dividend and divisor will be 32-bit signed integers.

- The divisor will never be 0.

- Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.

  ​

# 思路(C++)

不能用除法运算计算商，考虑位运算（t << 1等价于t*2），对于任意dividend和divisor，有：

**dividend = divisor \* 2^p1 + divisor * 2^p2 + divisor * 2^p3 + ... + y(p1 > p2 > p3 >.....，且y < divisor)**

那么被除数 dividend 除以除数 divisor 的商为**2^p1 + 2^p2 + 2^p3 + ....**

所以可用递归算法计算出商。

另外还需要考虑溢出问题，当dividend=INT_MIN并且divisor=-1时，发生溢出现象；

此外当左移时也有可能发生溢出现象，所以可转化为long型数据进行运算。

**题外话：**

INT_MAX = 2^31 - 1 =2147483647，INT_MIN= - 2^31 = -2147483648

INT_MIN需定义成 -INT_MAX - 1, 因为-2147483648无法表示

- INT_MAX + 1 = INT_MIN
- INT_MIN - 1 = INT_MAX
- abs(INT_MIN) = INT_MIN

在C/C++语言中，不能够直接使用-2147483648来代替最小负数，因为这不是一个数字，而是一个表达式。表达式的意思是对整数21473648取负，但是2147483648已经溢出了int的上限，所以定义为(-INT_MAX -1)。

C中int类型是32位的，范围是-2147483648到2147483647 。

1. 最轻微的上溢是INT_MAX + 1 :结果是 INT_MIN;

2. 最严重的上溢是INT_MAX + INT_MAX :结果是-2;

3. 最轻微的下溢是INT_MIN - 1:结果是是INT_MAX;

4. 最严重的下溢是INT_MIN + INT_MIN:结果是0 。

   ​


## Python

待完成......

## 参考解法

待完成......