# 问题描述

给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。

**示例:**

```c++
输入: ["eat", "tea", "tan", "ate", "nat", "bat"],
输出:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```

**说明：**

- 所有输入均为小写字母。
- 不考虑答案输出的顺序。

# 思路(C++)

借助`unordered_map<string, int>("abc...", index)` 来存储字母异位词的最小字典序(sort排序)，如例子中会依次存入`pair ("aet", 0), ("ant", 1),("abt", 2) `， 但遍历到strs[i]时，如果map中count(strs[i]) = 0， 那么将其扩充为`vector<string>` 添加到ans中，并更新map，否则将其插入ans[index]中。

## Python

待完成......

## 参考解法

待完成......