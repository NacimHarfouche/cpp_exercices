#include <iostream>

int main() {
  
  int weight;
  int numPlanet;
  
  std::cout << "Enter your earth weight : \n";
  std::cin >> weight;
  
  std::cout << "Enter the number of the planet that you want to fight on : \n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n";
  std::cin >> numPlanet;
  
  switch (numPlanet) {
    case 1 :
      weight *= 0.78;
      break;
    case 2 :
      weight *= 0.39;
      break;
    case 3 :
      weight *= 2.65;
      break;
    case 4 :
      weight *= 1.17;
      break;
    case 5 :
      weight *= 1.05;
      break;
    case 6 :
      weight *= 1.23;
      break;
  }
  
  std::cout << "Your weight should be: " << weight << "\n";
  
}