# Move Zeroes

## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Keep a pointer to the next non-zero position and fill it from left to right. Then place zeros at the end.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

This modifies the array in place and preserves the relative order of non-zero elements.
