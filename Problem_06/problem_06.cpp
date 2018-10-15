// Sum square difference
// Problem 6 

// The sum of the squares of the first ten natural numbers is,
// 1**2 + 2**2 + ... + 10**2 = 385

// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)**2 = 55**2 = 3025

// Hence the difference between the sum of the squares of the first 
// ten natural numbers and the square of the sum is 3025 − 385 = 2640.

// Find the difference between the sum of the squares of the first one 
// hundred natural numbers and the square of the sum.


#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int i;
  int sum = 0;
  int squared = 0;
  int num = 100;
  
  for (i=1; i<=num; i++) {
    squared += i*i;
    sum += i;
  }

  cout << "The sum of the squares is: " << squared << endl;
  cout << "The square of the sum is: " << sum*sum << endl;
  cout << "The difference is: " << abs(sum*sum - squared) << endl;

  return 0;
}