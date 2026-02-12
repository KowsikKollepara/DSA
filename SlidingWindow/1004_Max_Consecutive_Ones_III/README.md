<h1><a href="https://leetcode.com/problems/max-consecutive-ones-iii/">1004. Max Consecutive Ones III</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

**Approach:**
* Use Two pointer approach,Initialize two pointers l,r at start.
* Traverse r,and keep counting zeroes,if zeroes exceeded by k then keep on compressing the window size.
* check for maximum length of interval.

**Complexity:**
Time: `O(N) (more precisely O(2N)) `
Space: `O(1)`
