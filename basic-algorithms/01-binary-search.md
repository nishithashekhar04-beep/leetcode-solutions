## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search method on the sorted array. The middle element is checked with the target, and the search range is reduced to either the left or right half until the element is found or the range becomes empty.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The program was tested locally with different test cases, including a case where the target element is present and a case where the target element is not present.