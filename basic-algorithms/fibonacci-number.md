# Fibonacci Number

* **Difficulty:** Easy
* **Topic:** Basic Algorithms
* **LeetCode Link:** https://leetcode.com/problems/fibonacci-number/

## Problem Description

The Fibonacci sequence is defined as F(0) = 0, F(1) = 1, and F(n) = F(n - 1) + F(n - 2) for n greater than 1. Return F(n).

## Approach

1. Return `n` if `n` is 0 or 1.
2. Initialize two variables, `a = 0` and `b = 1`.
3. Calculate the next number by adding `a + b`.
4. Update the variables until reaching `n`.
5. Return the result.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

| Input   | Expected Output |
| ------- | --------------: |
| `n = 0` |             `0` |
| `n = 1` |             `1` |
| `n = 4` |             `3` |
| `n = 6` |             `8` |

## Learning Notes

I learned how to calculate Fibonacci numbers efficiently using iteration.
