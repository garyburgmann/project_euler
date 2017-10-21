// Largest prime factor
// Problem 3 
// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?


#include <iostream>
#include <math.h>

using namespace std;


int main() {
  long roof = 600851475143;
  long num = 2;
  long largest = 0;
  int check;
  long i;

  while (num <= sqrt(roof)) {
    if (num%2 != 0 && roof%num == 0) {
      for (i=2; i < sqrt(num); i++) {
        check = 0;
        if (num % i == 0) {
          check = 1;
          break;
        }
      }
      if (check == 0) {
        largest = num;
        cout << "Current: " << largest << endl;
      }
      // DEBUG cout << "Num is: " << num << " Current is: " << largest << " End Point is: " << roof/2 << endl;
    }
    num += 1;
    // DEBUG cout << "Num is: " << num << endl;
  } 

  cout << "The answer is: " << largest << endl;

  return 0;
}