// Write a program to find the sum of even numbers and the product of odd numbers in a vector.

// For example:

// Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

// Then the program should output:

// Sum of even numbers is 12
// Product of odd numbers is 27

#include <iostream>
#include <vector>

int main() {
  std::vector<double> listNum = {2, 4, 3, 6, 1, 9};
  int sumEvenNumbers = 0;
  int productOddNumbers = 0;
  
  for (int i = 0; i <= listNum.size() - 1; i++) {
    if ((listNum[i] % 2) == 0) {
      sumEvenNumbers += listNum[i];
    } else {
      
    }
  }

  std::cout << sumEvenNumbers << "\n";
  std::cout << productOddNumbers << "\n";
}