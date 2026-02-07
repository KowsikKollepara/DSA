## Remove Nth Node From End of List

**Problem:**
Given the head of a linked list, remove the nth node from the end of the list and return its head.

**Approach:**
* use two iterator slow and fast,initially move fast by n places
* and then after move both slow and fast, upto fast reches last
* and now the present slow is previous element of nth element from last
* delete next element of slow

**Complexity:**
Time: `O(N)`
Space: `O(1)` 
