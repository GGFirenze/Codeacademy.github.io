#include <iostream>
int main() {
  //Intro
  std::cout << "============🗡️🛡️🗡️🛡️======================\n\n";
  std::cout << "Dear fellow traveller: welcome to Dark Dungeons.\n\n";
  std::cout << "Leave me your hat and coat, use the loo, sip some coffee and brace yourself. Our adventure is about to start!\n\n";
  std::cout << "============🗡️🛡️🗡️🛡️======================\n\n";
  
  //Choosing a weapon
  int sword, bow, machete, axes;
  int weapon = (sword, bow, machete, axes);
  std::cout << "Before we start, time to choose your weapon.\n";
  std::cout << "Yes, you heard me. The journey is going to be long,\n";
  std::cout << "long and perilous. Better to be prepared.\n";
  std::cout << "Press 1 to get a sword, 2 for bow and arrows, 3 for the machete, and 4 to get 2 ascie. Choose wisely!\n\n";
  std::cin >> weapon;
  if (weapon == 1) {
    std::cout << "You chose the ancient Sword. A very powerful weapon in the hands of those who can handle it. Good luck, my boy.\n";
  } else if (weapon == 2) {
    std::cout << "You chose bow and arrows. Perfect in long-distance battle. Good luck!\n";
  } else if (weapon == 3) {
    std::cout << "You chose the machete. Much shorter and lighter than a sword, but it can be useful in 'bushy' situations.\n";
  } else if (weapon == 4) {
    std::cout << "You chose 2 ascie. You must be a LOTR fan. Not bad. This weapon will give you some flexibility in battle, should you need to use your weapon.\n";
  } else {
    std::cout << "C'mon dude, we have no time to waste! Choose your weapon by pressing a number between 1 and 4.\n";
  }
}
