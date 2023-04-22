#include <iostream>

int main() {
  
  double baht, riel, dong;
  double pound;
  std::cout << "Enter number of Thai 🇹🇭 Bhat: ";
  std::cin >> baht;
  std::cout << "Enter number of Cambodian 🇰🇭 Riel: ";
  std::cin >> riel;
  std::cout << "Enter number of Vietnamese 🇻🇳 Dong: ";
  std::cin >> dong;
  
  /*1 baht = 0.023 pound - 22 April 2023
  1 riel = 0.00020 pound - 22 April 2023
  1 dong = 0.000034 pound - 22 April 2023*/

  pound = 0.023 * baht + 0.00020 * riel + 0.000034 * dong;
  std::cout << "GB Pound = £" << pound << "\n";
}
