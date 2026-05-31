Given an integer `n`, calculate the digit frequency score by summing the contribution of each unique digit as:

`digit * frequency of that digit in n`

Each digit should contribute only once.

## Approach
1. Store the frequency of every digit in the number.
2. Traverse the digits again.
3. If the digit has not been used yet, add `digit * frequency` to the answer.
4. Mark that digit as processed.

## Code
See `solution.cpp`.

## Complexity
- Time: `O(d)`
- Space: `O(1)`

Where `d` is the number of digits in `n`.
