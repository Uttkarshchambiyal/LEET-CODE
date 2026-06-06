# 3950. Exactly One Consecutive Set Bits Pair

## Problem

Given an integer `n`, return `true` if its binary representation contains exactly one pair of consecutive set bits (`11`). Otherwise, return `false`.

## Example

**Input:** `n = 6`  
**Output:** `true`  
**Explanation:** Binary representation of 6 is `110`, which contains exactly one consecutive set bits pair.

**Input:** `n = 14`  
**Output:** `false`  
**Explanation:** Binary representation of 14 is `1110`, which contains two consecutive set bits pairs.

## Approach

Traverse the bits of the number from right to left.

At each step, check whether the current bit and the next bit are both `1`.  
If yes, increment the count of consecutive set bit pairs.

Finally:
- Return `true` if the count is exactly `1`
- Otherwise return `false`

```

## Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)
