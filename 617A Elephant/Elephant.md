# 617A - Elephant

## Problem
An elephant at point 0 wants to reach point x (x > 0). In one step, the elephant can move 1, 2, 3, 4, or 5 positions forward. Find the minimum number of steps needed.

## Input
- A single integer x (1 ≤ x ≤ 1,000,000)

## Output
- The minimum number of steps

## Examples
| Input | Output |
|-------|--------|
| 5     | 1      |
| 12    | 3      |

## Solution
To minimize steps, always take the maximum step size (5) as much as possible.

- Steps needed = ⌈x / 5⌉ = (x + 4) / 5

For x = 12: 12 / 5 = 2 remainder 2, so we need 2 steps of 5 + 1 step for the remainder = 3 steps.

## Complexity
- Time: O(1)
- Space: O(1)

## Link
https://codeforces.com/problemset/problem/617/A
