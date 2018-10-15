#!/usr/bin/env python3

# Project Euler - Problem 14
# Longest Collatz sequence

# The following iterative sequence is defined for the set of positive integers:

# n → n/2 (n is even)
# n → 3n + 1 (n is odd)

# Using the rule above and starting with 13, we generate the following sequence:

# 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
# It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

# Which starting number, under one million, produces the longest chain?

# NOTE: Once the chain starts the terms are allowed to go above one million.

from time import time

starting_time = time()

ceiling = 1000000
longest = 0
starting_num = 0

def collatz(n):
    count = 0
    while n != 1:
        # print(f'N: {n}')
        n = n // 2 if n % 2 == 0 else 3 * n + 1
        count += 1
    return count

for idx in range(1, ceiling + 1):
    if idx % 10000 == 0: print(f'Idx: {idx}')
    length = collatz(idx)
    if length > longest:
        longest = length
        starting_num = idx

ending_time = time()

print(f'Longest chain is {longest} at index {starting_num}')
print(f'The program took {ending_time - starting_time:.2f} seconds')
