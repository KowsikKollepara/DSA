<h1><a href="https://leetcode.com/problems/add-two-numbers-ii/">445. Add Two Numbers II</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
**Approach:**
* first we have to reverse the two given linked lists and traverse.
* create another dummy node and keep adding newnodes to that linkedlist.
* update the variable carry.

**Complexity:**
Time: `O(n+m) more precisely (O(n) + O(m) + O(max(n,m)) + O(max(n,m))) `
Space: `O(1)`
