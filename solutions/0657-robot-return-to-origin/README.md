# 657. Robot Return to Origin

**Difficulty:** Easy

## Problem

Given a string `moves` that represents the move sequence of a robot, return `true` if the robot returns to the origin after it finishes all of its moves, or `false` otherwise.

The robot starts at `(0, 0)` on a 2D plane. Each move is one of `'U'` (up), `'D'` (down), `'L'` (left), or `'R'` (right).

## Examples

**Example 1:**
```
Input: moves = "UD"
Output: true
```

**Example 2:**
```
Input: moves = "LL"
Output: false
```

## Approach

- Count occurrences of each direction: U, D, L, R
- If `countU == countD` and `countL == countR`, the robot returns to origin

## Complexity

- **Time:** O(n)
- **Space:** O(1)
