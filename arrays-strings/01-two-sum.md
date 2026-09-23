# Two Sum

## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a nested loop to compare every pair of numbers in the array. 
If the sum of two numbers equals the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

Tested with a normal case and an edge case. 
The solution should correctly identify the required pair of indices.

## Example
- Input: nums = [2, 7, 11, 15], target = 9
- Output: [0, 1]

## C Implementation
The C solution is available in `01-two-sum.c`.
