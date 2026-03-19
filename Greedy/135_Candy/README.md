<h1><a href="https://leetcode.com/problems/candy/">135. Candy</h1>
</a></h2><h3>Hard</h3><hr>

**Problem:**
There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.

**Approach:**
* Use Slope Approach : <br>
* Start with sum=1 and i =1
* If ratings[i]==ratings[i-1] : <br>
 ----> Give 1 candy and move forward
* If increasing slope : <br>
 ----> Keep increasing candies,store this in peak,and add to totalsum for each move.
* If Decreasing slope :<br>
 ----> Assign candies similarly (reverse logic)<br>
 ----> Add this to sum
* Adjustment :<br>
 ---->if down >peak, add down-peak to sum.


**Complexity:**
Time: `O(N)`
Space: `O(1)`
