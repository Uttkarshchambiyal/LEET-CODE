# 136. Single Number

## Approach

We use bitwise XOR to cancel out duplicate numbers.  
For each element `x` in the array, we compute `k ^= x`.  
Since `a ^ a = 0` and `a ^ 0 = a`, all pairs cancel out and only the unique element remains.

## Complexity

- Time: O(n)
- Space: O(1)
