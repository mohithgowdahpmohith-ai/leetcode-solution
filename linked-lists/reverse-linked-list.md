# Reverse a Linked List

## Problem
Reverse the order of nodes in a singly linked list.

### Approach
Use three pointers:
- previous node
- current node
- next node

Rewire each node to point to the previous node until the list is fully reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

This is a standard linked-list reversal technique and works efficiently without extra memory.
# Reverse a Linked List

## Problem: Reverse a Linked List

### Approach

Use three pointers: previous, current, and next. Move through the list while reversing each node's `next` pointer until the list is fully reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

This is the standard iterative solution for reversing a singly linked list in place.
