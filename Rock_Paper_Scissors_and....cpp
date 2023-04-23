/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>
 
int main() {
 
  // Live long and prosper
 srand(time(NULL));
 int computer = rand() % 4 + 1;
 int user = 0;

std::cout << "====================\n";
std::cout << "rock🏔️ paper📄 scissors✂️ or...🤌🏼🤌🏼🤌🏼!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌\n";
std::cout << "4) 🤌🏼🤌🏼🤌🏼\n";
 
std::cout << "shoot! (Type your choice - 1 to 4 - then hit Enter) ";
std::cin >> user;

if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
    else if ( user == 4)
    std::cout << "you choose the mighty Italian: 🤌🏼🤌🏼🤌🏼\n";
  else
    std::cout << "you choose: ✌️\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
        else if ( computer == 4)
    std::cout << "cpu choose the mighty Italian: 🤌🏼🤌🏼🤌🏼\n";
  else
    std::cout << "cpu choose: ✌️\n";


  if (user == computer) {

    std::cout << "it's a tie!\n";

  }

  // user rock

if (user == 1) {

    if (computer == 2) {

      std::cout << "You lost! Cacati in culo!\n";

    }
  else if (computer == 3) {

      std::cout << "You won! Una suhatha per te!\n";}

      else if (computer == 4) {
         std::cout << "Nothing can beat the mighty Italian: 🤌🏼🤌🏼🤌🏼. You loose and you stink!\n";

    }

  }

  // user paper

if (user == 2) {

    if (computer == 1) {

      std::cout << "You won! Una suhathat per te!\n";

    }
  else if (computer == 3) {

      std::cout << "You lost! Oh cahatha!\n";}
      else if (computer == 4) {
         std::cout << "Nothing can beat the mighty Italian: 🤌🏼🤌🏼🤌🏼. You loose and you stink!\n";

    }

    }

  // user scissors

if (user == 3) {

    if (computer == 1) {

      std::cout << "You won! Una suhatha per te!\n";

    }
   else if (computer == 2) {

      std::cout << "You lost! Oh sguerciooo!\n";}
      else if (computer == 4) {
         std::cout << "Nothing can beat the mighty Italian: 🤌🏼🤌🏼🤌🏼. You loose and you stink!\n";

    }

    }

    // user gesto italiano
if (user == 4) {
      if (computer == 1 ) {
        std::cout << "Nothing can beat the Mighty Italian Hand! Mi prostro ai tuoi piedi maleodoranti!\n";
  }      else if (computer == 2) {
          std::cout << "Nothing can beat the Mighty Italian Hand! Mi prostro ai tuoi piedi maleodoranti!\n";
      } else if (computer == 3) {
        std::cout << "Nothing can beat the Mighty Italian Hand! Mi prostro ai tuoi piedi maleodoranti!\n";
      }
    }

  

  return 0;
}
