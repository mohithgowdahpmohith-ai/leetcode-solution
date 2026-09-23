# Valid Anagram

## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Count the frequency of each character in both strings. If the frequency counts match exactly, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1) for fixed-size alphabet

### Notes

This works efficiently for lowercase English letters using a 26-element frequency array.
