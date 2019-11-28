#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  int i = 0;
  int total = 10;
  if (num == 0) {
      return 1;
  }
  while (i < num) {
    total *= 10;
    i++;
  }
  return total;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  std::cout << tenth_power(3) << "\n";
  
}