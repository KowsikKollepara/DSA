<h1><a href="https://leetcode.com/problems/merge-k-sorted-lists/description/">23. Merge k Sorted Lists</h1>
</a></h2><h3>Hard</h3><hr>

**Problem:**
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

**Approach:**
* Use Priority Queue ,min head to store current heads.
* And add those nodes to our answer linked list.
* if any head is taken in our ans then move that head.

**Complexity:**
Time: `O(NlogK) `
Space: `O(K)`<br>
Where, N is number of elements in list , K is number of lists
