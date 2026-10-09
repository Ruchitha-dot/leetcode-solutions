# Reverse Linked List

* **Difficulty:** Easy
* **Topic:** Linked Lists
* **LeetCode Link:** https://leetcode.com/problems/reverse-linked-list/

## Problem Description

Given the head of a singly linked list, reverse the list and return the reversed list.

## Approach

1. Initialize three pointers: `prev`, `curr`, and `next`.
2. Store the next node before changing the link.
3. Reverse the current node's link to point to the previous node.
4. Move the pointers forward.
5. Return the new head of the reversed list.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

| Input         | Expected Output |
| ------------- | --------------- |
| `[1,2,3,4,5]` | `[5,4,3,2,1]`   |
| `[1,2]`       | `[2,1]`         |
| `[]`          | `[]`            |

## Learning Notes

I learned how to reverse a linked list by changing node pointers without using extra arrays.
