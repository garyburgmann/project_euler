// 10001st prime
// Problem 7 
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
// we can see that the 6th prime is 13.

// What is the 10 001st prime number?


#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
  int i;
  int count = 0;
  int num = 1;
  int roof = 10001;
  int ans;
  int check;
  
  while (count < roof) {
    for (i=2; i < num; i++) {
      check = 0;
      if (num % i == 0) {
        check = 1;
        break;
      }
    }
    if (check == 0 or num == 2) {
      count += 1;
      cout << "Prime " << count << ": " << num << endl;
    }
    num += 1;
  }

  cout << "The answer is: " << num-1 << endl;
  
  return 0;
}