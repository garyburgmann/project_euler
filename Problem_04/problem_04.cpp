// Largest palindrome product
// Problem 4 
// A palindromic number reads the same both ways. The largest palindrome 
// made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.


#include <iostream>

using namespace std;

int testPalindrome (int n) {
  int temp = n;
  int ret = 0;
  while (temp > 0) {
    ret = ret * 10;
    ret = ret + temp%10;
    temp /= 10;
  }
  if (ret == n) {
    // DEBUG cout << "Matched: " << ret << endl;
    return 1;
  }
  return 0;
}

int main() {
  int i;
  int top = 999;
  int bottom = 111;
  int num = top;
  int biggest = 0;
  int multiply;
  int f1, f2;

  while (num >= bottom) {
    for (i=bottom; i <= top; i++) {
      multiply = num*i;
      if (testPalindrome(multiply) && multiply > biggest) {
        biggest = multiply;
        f1 = num;
        f2 = i;
      }
    }
    num -= 1;
  }
  cout << "The answer is: " << biggest << endl;
  cout << "Factors are: " << f1 << " and " << f2 << endl;

  return 0;
}