# Baseball Game

* **Difficulty:** Easy
* **Topic:** Stacks
* **LeetCode Link:** https://leetcode.com/problems/baseball-game/

## Problem Description

Calculate the total score using a list of operations. Each operation can add a score, cancel the previous score, double the previous score, or add the last two scores.

## Approach

1. Use an array as a stack to store scores.
2. If the operation is a number, push it onto the stack.
3. If the operation is `C`, cancel the previous score.
4. If the operation is `D`, double the previous score.
5. If the operation is `+`, add the previous two scores.
6. Add all remaining scores to get the total.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Test Cases

| Operations                           | Expected Output |
| ------------------------------------ | --------------: |
| `["5","2","C","D","+"]`              |            `30` |
| `["5","-2","4","C","D","9","+","+"]` |            `27` |
| `["1","C"]`                          |             `0` |

## Learning Notes

I learned how a stack can store scores and handle operations that modify previous results.
