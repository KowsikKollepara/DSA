<h1><a href="https://leetcode.com/problems/linked-list-cycle-ii/">142. Linked List Cycle II</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.

**Approach:**
* Use Tortoise Hare approach(i.e take two pointers slow,fast, move fast by two steps and slow by one step).
* When they meet at one point initialize fast pointer at head again and move both by single single step.
* And the second time when they meet it is the starting point of cycle.
<img src="https://static.takeuforward.org/content/19.png-Q8E1KGuH" alt="Image 1">
<img src="https://static.takeuforward.org/content/20.png-D9L7pl1P" alt="Image 2">

**Complexity:**
Time: `O(N)`
Space: `O(1)`
