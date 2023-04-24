#include <iostream>
int main() {
  //Intro
  std::cout << "============🗡️🛡️🗡️🛡️======================\n\n";
  std::cout << "Dear fellow traveller: welcome to Dark Dungeons.\n\n";
  std::cout << "Leave me your hat and coat, use the loo, sip some coffee and brace yourself. Our adventure is about to start!\n\n";
  std::cout << "============🗡️🛡️🗡️🛡️======================\n\n";
  
  //Choosing a weapon
  int sword = 50, bow = 40, machete = 30, axes = 55;
  int weapon = (sword, bow, machete, axes);
  int chosenweapon = 0;

  std::cout << "Before we start, time to choose your weapon.\n";
  std::cout << "Yes, you heard me. The journey is going to be long,\n";
  std::cout << "long and perilous. Better to be prepared.\n";
  std::cout << "Press 1 to get a sword, 2 for bow and arrows, 3 for the machete, and 4 to get 2 axes. Choose wisely!\n\n";
  std::cin >> weapon;

  if (weapon == 1) {
    std::cout << "You chose the ancient Sword. A very powerful weapon in the hands of those who can handle it. Good luck, my boy.\n";
    chosenweapon = sword;
  } else if (weapon == 2) {
    std::cout << "You chose bow and arrows. Perfect in long-distance battle. Good luck!\n";
    char chosenweapon = bow;
  } else if (weapon == 3) {
    std::cout << "You chose the machete. Much shorter and lighter than a sword, but it can be useful in 'bushy' situations.\n";
    chosenweapon = machete;
  } else if (weapon == 4) {
    std::cout << "You chose 2 axes. You must be a LOTR fan who closely followed Gimli's adventures. Not bad. This weapon will give you some flexibility in battle, should you need to use your weapon.\n";
    chosenweapon = axes;
  } else {
    std::cout << "C'mon dude, we have no time to waste! Choose your weapon by pressing a number between 1 and 4.\n\n";
  }

// Wanna practice?

int practice = 0;

std::cout << "Amazing, well done for choosing your weapon!\n\n";
std::cout << "Press 1 if you want to practice. Press 2 if you want to ignore at this time.\n\n" ;
std::cout << "Do you want to practice before we start? Practicing will increase your efficacy with your weapon.\n\n";
std::cin >> practice;

if (practice == 1) {
  std::cout << "Wise choice, my boy!\n";
  std::cout << "Your weapon efficacy increased!\n";
  std::cout << "Your new efficacy value is now " << chosenweapon + 30 << ". \n\n";
}

if (practice == 2) {
  std::cout << "You sure? OK, don't say I hadn't warned you. C'mon, let's start now!\n\n";
}


}
