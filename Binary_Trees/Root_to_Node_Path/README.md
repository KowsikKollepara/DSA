## Print Root to Node Path in a Binary Tree

**Problem:**
Given the root of a binary tree and a target node value, return the path from the root to that node. It is guaranteed that all node values are unique and the target exists in the tree.

**Approach:**
Use recursion with backtracking — add nodes while traversing, and remove them if the target is not found in that path.

**Complexity:**
Time: `O(N)`
Space: `O(H)` (height of the tree)
