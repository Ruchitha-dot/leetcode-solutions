# Fibonacci Number

* **Difficulty:** Easy
* **Topic:** Basic Algorithms
* **LeetCode Link:** https://leetcode.com/problems/fibonacci-number/

## Problem Description

The Fibonacci sequence is defined as F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2) for n greater than 1.

## Approach

1. Initialize `a = 0` and `b = 1`.
2. Calculate the next Fibonacci number by adding `a` and `b`.
3. Update the two variables until reaching `n`.
4. Return the resulting Fibonacci number.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

| Input | Expected Output |
| ----- | --------------- |
| n = 4 | 3               |
| n = 0 | 0               |
| n = 1 | 1               |

## Learning Notes

I learned how to calculate Fibonacci numbers using iteration and update variables efficiently without storing the entire sequence.
