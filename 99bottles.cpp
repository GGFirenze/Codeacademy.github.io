#include <iostream>

int main() {

  /*i bottles of pop on the wall.
Take one down and pass it around.
i-1 bottles of pop on the wall.*/

for (int i = 99; i > 0; i--) {
  std::cout << i << "bottles of pop on the wall.\n";
  std::cout << "Take one down and pass it around.\n";
  std::cout << i - 1 << "bottles of pop on the wall.\n\n";
}
    
}
