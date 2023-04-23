#include <iostream>

int main() {

int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF CODECADEMY\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  tries++;

  while (pin != 1234 && tries < 3) {
    
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    std::cout << "Invalid PIN\n";
    tries++;
    
  }

  
  if (pin == 1234) {
    
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }

  if (tries == 3) {
    std::cout << "3 failed attempts! Card blocked! Call Admin to unblock.\n";
    std::cout << "Ora son cazzi tua!\n";
  }
  
}
