# 问题描述

给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。

示例 1:

```
输入: num1 = "2", num2 = "3"
输出: "6"
```

示例 2:

```
输入: num1 = "123", num2 = "456"
输出: "56088"
```

说明：

num1 和 num2 的长度小于110。
num1 和 num2 只包含数字 0-9。
num1 和 num2 均不以零开头，除非是数字 0 本身。
不能使用任何标准库的大数类型（比如 BigInteger）或直接将输入转换为整数来处理。 

# 思路(C++)

一个数的第i 位和另一个数的第j 位相乘所得的数，一定是要累加到结果的第i+j 位上。这里i， j 都是从右往左，从0 开始数（反向储存在数组后则是按从左到右）。
即：`result[i+j] += a[i]*b[j]`;

## 知识点补充(c++ string与int转换)

+ **int to string**

  1. 全局函数std::to_string

  2. 采用sstream中定义的字符串流对象来实现

     ```c++
     ostringstream os; //构造一个输出字符串流，流内容为空 
     int i = 12; 
     os << i; //向输出字符串流中输出int整数i的内容 
     cout << os.str() << endl; //利用字符串流的str函数获取流中的内容 
     ```

+ **string to int**

  1. 使用std::stoi/stol/stoll等等函数

     ```c++
     string str = "1010";
     int a = stoi(str, 0, 2); // 10
     // stoi（字符串，起始位置，n进制），将 n 进制的字符串转化为十进制
     ```

  2. 采用标准库中atoi函数,对于其他类型也都有相应的标准库函数，比如浮点型atof(),long型atol()等等

     ```c++
     string s = "12"; 
     int a = atoi(s.c_str());
     ```

  3. 采用sstream头文件中定义的字符串流对象来实现转换

     ```c++
     istringstream is("12"); //构造输入字符串流，流的内容初始化为“12”的字符串 
     int i; 
     is >> i; //从is流中读入一个int整数存入i中
     ```

## Python

待完成......

## 参考解法

待完成......