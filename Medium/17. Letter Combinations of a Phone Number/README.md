# 思路(C++)

标准的DFS和BFS搜索算法
1. DFS：借助栈机制， 可用string代替（push_back, pop_back）;
    方法：遍历string，并对i索引的字符在(i+1, s.len)查找是否重复；
2. BFS: 借助队列机制，与一般BFS不同，此处每次入队为从根节点到当前节点的全路径字符（q.push(cur+a)）

DFS和BFS的一般解法参考[此处](https://murphypei.github.io/blog/2019/04/cpp-bfs-dfs.html)



## Python

待完成......

## 参考解法

待完成......