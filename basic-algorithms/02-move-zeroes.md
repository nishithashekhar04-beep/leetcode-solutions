## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I went through the array and moved all non-zero elements to the front while keeping their original order. The remaining positions at the end of the array are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The program was tested locally with different test cases, including a normal case with zeroes between non-zero elements and an edge case where all elements are zero.