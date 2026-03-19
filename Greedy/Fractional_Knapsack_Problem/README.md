<h1>Fractional Knapsack Problem</h1>
</a></h2><h3>Medium</h3><hr>

**Problem:**
The weight of N items and their corresponding values are given. We have to put these items in a knapsack of weight W such that the total value obtained is maximized.

Note: We can either take the item as a whole or break it into smaller units.


**Approach:**
* Use Greedy Approach : 
* Since items can be broken into smaller units, we focus on selecting items with the highest value-to-weight ratio first.
* Sort the items according to value to weight ratio.
* Pick those whose weight is less than or equal to the current capacity of the knapsack.
* If an item's weight exceeds the remaining capacity, break the item into smaller units, calculate its value according to the remaining capacity, and add this value to the total.

**Complexity:**
Time: `O(N + logN)`
Space: `O(1)`
