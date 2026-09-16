## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I checked the prices from left to right and kept track of the minimum price seen so far. For each price, I calculated the possible profit and updated the maximum profit when a higher value was found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The program was tested locally with different test cases, including a normal case and a case where no profit can be made.