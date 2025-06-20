# fibo

A sequence is called a Fibonacci sibling if it is defined by the following recurrence relation:
- `F[n] = A * F[n - 1] + F[n - 2]`, where `A` is a positive integer.

Additionally, `F[i] = i` for all `i < 2`.

Given this Fibonacci sibling sequence `F`, calculate `F[n]`.

Due to the possibility of the numbers growing very large, you only need to print the **first 5 digits** of `F[n]`.

## Input

The input consists of multiple test cases.

Each test case includes 2 integers: `n (1 ≤ n ≤ 500)` and `A (1 ≤ A < 10)`.

It is guaranteed that `F[n]` has at least 5 digits.

## Output

For each test case, output a single line containing the first 5 digits of `F[n]`.

## Sample

### Input
21 1
30 1

### Output
18946
83284
