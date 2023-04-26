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

/* Piece of code to improve initial choice or just choices moving forward*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string choice;
    bool validChoice = false;

    while (!validChoice) {
        cout << "Choose an item from the following list:\n";
        cout << "1. Sword\n";
        cout << "2. Shield\n";
        cout << "3. Potion\n";
        cout << "4. Staff\n";
        cout << "Enter the number of your choice: ";
        cin >> choice;

        if (choice == "1" || choice == "2" || choice == "3" || choice == "4") {
            validChoice = true;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }

    cout << "You chose item " << choice << ".\n";

    return 0;
}

// Training proposal

#include <iostream>
#include <string>

using namespace std;

int main() {
    string weapon;
    int efficacy = 0;

    cout << "Choose a weapon from the following list:\n";
    cout << "1. Sword (efficacy: 50)\n";
    cout << "2. Shield (efficacy: 30)\n";
    cout << "3. Potion (efficacy: 20)\n";
    cout << "4. Staff (efficacy: 40)\n";
    cout << "Enter the number of your choice: ";
    string choice;
    cin >> choice;

    if (choice == "1") {
        weapon = "Sword";
        efficacy = 50;
    } else if (choice == "2") {
        weapon = "Shield";
        efficacy = 30;
    } else if (choice == "3") {
        weapon = "Potion";
        efficacy = 20;
    } else if (choice == "4") {
        weapon = "Staff";
        efficacy = 40;
    } else {
        cout << "Invalid choice. Please try again.\n";
        return 0;
    }

    cout << "You chose " << weapon << " (efficacy: " << efficacy << ").\n";
    cout << "Do you want to get trained on using " << weapon << "? (yes or no): ";
    string response;
    cin >> response;

    if (response == "yes") {
        efficacy += 50;
        cout << "Great! Your " << weapon << " efficacy increased by 50.\n";
    } else {
        cout << "OK, you did not choose to get trained.\n";
    }

    cout << "Your final " << weapon << " efficacy is " << efficacy << ".\n";

    return 0;
}

// battle scenario

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Choose weapon and train
    string weapon;
    int efficacy = 0;

    cout << "Choose a weapon from the following list:\n";
    cout << "1. Sword (efficacy: 50)\n";
    cout << "2. Shield (efficacy: 30)\n";
    cout << "3. Potion (efficacy: 20)\n";
    cout << "4. Staff (efficacy: 40)\n";
    cout << "Enter the number of your choice: ";
    string choice;
    cin >> choice;

    if (choice == "1") {
        weapon = "Sword";
        efficacy = 50;
    } else if (choice == "2") {
        weapon = "Shield";
        efficacy = 30;
    } else if (choice == "3") {
        weapon = "Potion";
        efficacy = 20;
    } else if (choice == "4") {
        weapon = "Staff";
        efficacy = 40;
    } else {
        cout << "Invalid choice. Please try again.\n";
        return 0;
    }

    cout << "You chose " << weapon << " (efficacy: " << efficacy << ").\n";
    cout << "Do you want to get trained on using " << weapon << "? (yes or no): ";
    string response;
    cin >> response;

    if (response == "yes") {
        efficacy += 50;
        cout << "Great! Your " << weapon << " efficacy increased by 50.\n";
    } else {
        cout << "OK, you did not choose to get trained.\n";
    }

    cout << "Your final " << weapon << " efficacy is " << efficacy << ".\n";

    // Battle
    srand(time(0)); // Seed the random number generator with the current time
    int enemyEfficacy = rand() % 51 + 50; // Random efficacy between 50 and 100

    cout << "You encounter an enemy with an efficacy of " << enemyEfficacy << ".\n";

    if (efficacy > enemyEfficacy) {
        cout << "Congratulations! You defeated the enemy with your " << weapon << ".\n";
    } else if (efficacy < enemyEfficacy) {
        cout << "Unfortunately, the enemy was too powerful for your " << weapon << ". You have been defeated.\n";
    } else {
        cout << "The battle was evenly matched, but ultimately inconclusive.\n";
    }

    return 0;
}
