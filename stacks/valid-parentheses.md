# Valid Parentheses

* **Difficulty:** Easy
* **Topic:** Stacks
* **LeetCode Link:** https://leetcode.com/problems/valid-parentheses/

## Problem Description

Given a string containing brackets, determine whether every opening bracket has a matching closing bracket in the correct order.

## Approach

1. Push opening brackets onto a stack.
2. For each closing bracket, check whether the stack is empty.
3. Pop the top bracket and check whether it matches.
4. At the end, the stack must be empty.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Test Cases

| Input      | Expected Output |
| ---------- | --------------- |
| `"({[]})"` | `true`          |
| `"(]"`     | `false`         |
| `"()"`     | `true`          |
| `"("`      | `false`         |

## Learning Notes

I learned how a stack helps match opening and closing brackets in the correct order.
