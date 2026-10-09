# Middle of the Linked List

* **Difficulty:** Easy
* **Topic:** Linked Lists
* **LeetCode Link:** https://leetcode.com/problems/middle-of-the-linked-list/

## Problem Description

Given the head of a singly linked list, return the middle node. If there are two middle nodes, return the second middle node.

## Approach

1. Use two pointers: slow and fast.
2. Move the slow pointer one step at a time.
3. Move the fast pointer two steps at a time.
4. When the fast pointer reaches the end, the slow pointer points to the middle node.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

| Input           | Expected Output |
| --------------- | --------------- |
| `[1,2,3,4,5]`   | `3`             |
| `[1,2,3,4,5,6]` | `4`             |
| `[1]`           | `1`             |

## Learning Notes

I learned how slow and fast pointers can find the middle of a linked list efficiently.
