# Problem of the week #4: BFS and DFS

This week, we'll be learning about a data structure called a graph and how
to search through various versions of them via breadth-first search (BFS)
and depth-first search (DFS).

In a nutshell, graphs are a series of nodes connected together by edges. In
CS, graphs are EVERYWHERE. Especially in competitive programming. The best
example of a graph is a map where each city is a node and each road from
each city is an edge. Generally, graphs are implemented by having a custom
node data structure that contains pointers to other nodes. There are other,
faster ways of representation of graphs as well, like via an adjacency
matrix or adjacency list (see Chapter 11 of Competitive Programmer's
Handbook).

BFS and DFS are two ways to travel through the graph efficiently. They can
be implemented recursively (slower) or iteratively using a stack or queue
data structure (faster). The reason recursion is slow in this case is due
to the extra memory and processing power that is needed for each function
call, and these graphs can get really big (think a billion+ nodes). If BFS
and DFS weren't cool already, a lot of artificial intelligence agents use
heavily modified versions of them.

Here is an excellent video that explains graphs, DFS, and BFS:
[link](https://www.youtube.com/watch?v=zaBhtODEL0w)

The problem of the week is different this week. It is to read and do the
Leetcode problems on this tutorial:
[link](https://medium.com/leetcode-patterns/leetcode-pattern-2-dfs-bfs-25-of-the-problems-part-2-a5b269597f52).
This tutorial will walk you through a few of the many use cases of BFS and
DFS (and provide answers if you are stuck. Just make sure you walk through
the answers and understand them though!).

Here is my solution to last week's problem:
[link](https://github.com/calgagi/problems/blob/master/comp/codeforces/0545C/template.cpp)

Hope everyone is having a fantastic summer!
