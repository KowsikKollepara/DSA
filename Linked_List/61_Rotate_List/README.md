<h1><a href="https://leetcode.com/problems/rotate-list/">61. Rotate List</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
Given the head of a linked list, rotate the list to the right by k places.

**Approach:**
*  We first compute the length of the list and connect the last node to the head, forming a circular linked list.
* Then we locate the new tail, which is at length - (k % length) steps from the start. The node next to this becomes the new head.
* And we break the circular link there.

**Complexity:**
Time: `O(N)`
Space: `O(1)`
