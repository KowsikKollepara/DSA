<h1><a href="https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/">236. Lowest Common Ancestor of a Binary Tree</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
Given a binary tree and two nodes `p` and `q`, return their Lowest Common Ancestor (LCA). The LCA is the deepest node that has both `p` and `q` as descendants (a node can be a descendant of itself).

**Approach:**
Use a recursive DFS approach:

* If the current node is `NULL`, `p`, or `q`, return it.
* Search left and right subtrees.
* If both sides return a node, the current node is the LCA.
* Otherwise, return the non-null child.

**Complexity:**
Time: `O(N)`
Space: `O(H)` (tree height)
