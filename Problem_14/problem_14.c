// Project Euler - Problem 14
// Longest Collatz sequence

// The following iterative sequence is defined for the set of positive integers:

// n → n/2 (n is even)
// n → 3n + 1 (n is odd)

// Using the rule above and starting with 13, we generate the following sequence:

// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

// Which starting number, under one million, produces the longest chain?

// NOTE: Once the chain starts the terms are allowed to go above one million.
#include <stdio.h>
#include <time.h>

int collatz(long n) {
  int count = 0;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    count += 1;
  }
  return count;
}

int main () {
  clock_t starting_time = clock();
  clock_t ending_time;
  int ceiling = 1000000;
  int longest = 0;
  int starting_num = 0;
  int current_length = 0;

  for (long i = 1; i < ceiling + 1; i++) {
    // if (i % 10000 == 0) {
    //   printf("Idx %ld\n", i);
    // }
    current_length = collatz(i);
    if (current_length > longest) {
      longest = current_length;
      starting_num = i;
    }
  }

  printf("Longest chain is %d at index %d\n", longest, starting_num);
  ending_time = clock();
  printf("The program took %f seconds\n", (double)((ending_time - starting_time) / CLOCKS_PER_SEC));

  return 0;
}
