# Two Sum

**Difficulty:** Easy

**Topic:** Arrays & Strings

**LeetCode Link:** https://leetcode.com/problems/two-sum/

## Approach

I used two nested loops to check pairs of numbers. When their sum equals the target, I return their indices.

## Time Complexity

O(n²)

## Space Complexity

O(1), excluding the returned result.

## Test Cases

**Typical Test Case**

Input: `nums = [2,7,11,15]`, `target = 9`

Expected Output: `[0,1]`

**Edge Case**

Input: `nums = [3,3]`, `target = 6`

Expected Output: `[0,1]`

## Notes / Edge Cases

* The two indices must be different.
* Return the indices, not the numbers.
* Do not use the same element twice.

## Learning Notes

I learned how nested loops can find two numbers that add up to a target.

## Submission Status

* [x] Tested locally in VS Code
* [ ] Accepted on LeetCode
* [ ] Accepted screenshot saved
