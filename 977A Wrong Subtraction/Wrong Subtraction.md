# 977A - Wrong Subtraction

## Problem
Tanya subtracts one from a number using a wrong algorithm:
- If last digit is non-zero → decrease by 1
- If last digit is zero → divide by 10 (remove last digit)

Given n and k, find the result after k subtractions.

## Input
- Two integers n and k (2 ≤ n ≤ 10⁹, 1 ≤ k ≤ 50)

## Output
- The result after k subtractions

## Examples
| Input | Output |
|-------|--------|
| 512 4 | 50     |
| 1000000000 9 | 1 |

## Solution
Simply simulate the process k times:
- If `x % 10 == 0` → `x = x / 10`
- Else → `x = x - 1`

## Complexity
- Time: O(k)
- Space: O(1)

## Link
https://codeforces.com/problemset/problem/977/A
