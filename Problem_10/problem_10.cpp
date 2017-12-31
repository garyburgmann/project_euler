// Summation of primes
// Problem 10

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.


#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int num;
  int flag;
  long sum = 0;
  int i, j;
  int roof = 2000000; // 2 million

  for ( i=2; i<roof; i++ ) {
    if ( i%2 != 0 || i == 2) {
      for ( j=2; j < i/2; j++ ) {
        flag = 0;
        if ( i % j == 0 ) {
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        sum += i;
        // cout << "Current: " << i << " " << sum << endl;
      }
    }
  }

  cout << "Answer: " << sum << endl;

  return 0;
}