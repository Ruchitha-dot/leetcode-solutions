# Binary Search

* **Difficulty:** Easy
* **Topic:** Basic Algorithms
* **LeetCode Link:** https://leetcode.com/problems/binary-search/

## Problem Description

Given a sorted array of integers and a target, return the index of the target if it exists. Otherwise, return -1.

## Approach

1. Set `left` to the first index and `right` to the last index.
2. Calculate the middle index.
3. If the middle element equals the target, return its index.
4. If the target is larger, search the right half.
5. Otherwise, search the left half.
6. Return -1 if the target is not found.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Test Cases

| Input                              | Expected Output |
| ---------------------------------- | --------------- |
| nums = [-1,0,3,5,9,12], target = 9 | 4               |
| nums = [-1,0,3,5,9,12], target = 2 | -1              |
| nums = [5], target = 5             | 0               |

## Learning Notes

I learned how binary search reduces the search area by half in each step. The input array must be sorted for this algorithm to work.
