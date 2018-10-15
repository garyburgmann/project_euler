//Special Pythagorean triplet
//Problem 9
//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.


#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
  int i, j, k;
  int calc;
  int total;
  int sum;
  int mul;
  int match = 1000;

  for ( k=2; k<1000; k++ ) {
    for ( j=1; j<k; j++ ) {
      for ( i=0; i<j; i++ ) {
        calc = pow(i, 2) + pow(j, 2);
        total = pow(k, 2);
        sum = i + j + k;
        if ( calc == total && sum == match ) {
          cout << sum << " " << calc << " " << total << endl;
          cout << i << " " << j << " " << k << endl;
          mul = i * j * k;
          cout << mul << endl;
        }
      }
    }
  }
  // cout << pow((i-1),2) + pow((i-2),2) + pow((i-3),2) << endl;

  return 0;
}
