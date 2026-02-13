<h1><a href="https://leetcode.com/problems/binary-subarrays-with-sum/">930. Binary Subarrays With Sum</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

**Approach:**
* In these type of problems where no. of subarrrays are asked with sum=k,we calculate subarrays with sum <=k and <=k-1 ,and subtract these two.
* Use Two pointer approach,Initialize two pointers l,r at start.

**Complexity:**
Time: `O(N) `
Space: `O(1)`
