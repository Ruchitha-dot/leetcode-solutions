# Valid Palindrome

* **Difficulty:** Easy
* **Topic:** Arrays and Strings
* **LeetCode Link:** https://leetcode.com/problems/valid-palindrome/

## Problem Description

Determine whether a string is a palindrome after converting uppercase letters to lowercase and ignoring non-alphanumeric characters.

## Approach

1. Use two pointers: `left` at the beginning and `right` at the end.
2. Skip non-alphanumeric characters.
3. Compare characters without considering case.
4. If all characters match, return true.

## Time Complexity

O(n)

## Space Complexity

O(1), excluding the input string.

## Test Cases

| Input                              | Expected Output |
| ---------------------------------- | --------------- |
| `"A man, a plan, a canal: Panama"` | `true`          |
| `"race a car"`                     | `false`         |
| `" "`                              | `true`          |

## Learning Notes

I learned how to use two pointers, check alphanumeric characters, and compare characters without considering uppercase and lowercase differences.
