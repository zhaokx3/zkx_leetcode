# 思路(C++)

分两步：
1. 判断一个字符串是否为“unique characters”
    方法：遍历string，并对i索引的字符在(i+1, s.len)查找是否重复；
2. 找出给定vector<string> arr的“sub-sequence”数(组合问题，2^n)
    方法：利用二进制数来选sub-sequence，举个例子:arr为["cha","r","act","ers"]，那么有16中选法，其中第13(1101)种选法所表示的sub-sequence为；"cha"+"r"+"ers"，再用步骤一判断即可。

## Python

待完成......

## 参考解法

待完成......