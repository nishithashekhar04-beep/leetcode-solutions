## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store the opening brackets. When a closing bracket is found, it is compared with the top element of the stack. If all brackets are matched correctly, the parentheses are valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The program was tested locally with different test cases, including a valid combination of brackets and an invalid combination of brackets.