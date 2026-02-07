<h1><a href="https://leetcode.com/problems/palindrome-linked-list/">234. Palindrome Linked List</h1>
</a></h2><h3>Easy</h3><hr>

**Problem:**
Given the head of a singly linked list, return true if it is a palindrome or false otherwise

**Approach:**
* Use Tortoise-Hare Algorithm to find middle element of linkedlist.
* And then reverse the 2nd half of Linked List and compare two halves using iterators.
* Befor returning true or false reverse the Linked List again.

**Complexity:**
Time: `O(N) (more precisely O(2N))`
Space: `O(1)`
