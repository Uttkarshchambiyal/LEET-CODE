# Count Partitions

Write a function to count the number of indices where an array can be partitioned into two non-empty parts such that the difference between the sum of the left part and the sum of the right part is even.

If there is no such partition, return `0`.

## Example 1

Input: `nums = [10, 10, 3, 7, 6]`  
Output: `4`

## Example 2

Input: `nums = [1, 2, 2]`  
Output: `0`

## Constraints

- `2 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

## Approach

- Find the total sum of the array.
- Traverse the array from left to right and maintain a running `leftsum`.
- Subtract the current element from `rightsum`.
- For each partition point, check whether `(leftsum - rightsum)` is even.
- Count all valid partition points.

## Complexity

- Time: `O(n)`
- Space: `O(1)`
