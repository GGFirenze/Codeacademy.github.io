
 

#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 🎱 SAYS: \n\n";

  srand(time(NULL));

  int choice = std::rand() % 20;

  switch(choice) {
    case 0:
      std::cout << " Pam piripim pam - borda in culo!.\n";
      break;
    case 1:
      std::cout << " Gnamo, levati dai hoglioni!\n";
      break;
    case 2:
      std::cout << " Ti puzz'ibbuho.\n";
      break;
    case 3:
      std::cout << " Mi stai facendo infervorare.\n";
      break;
    case 4:
      std::cout << " Oooh, ma che ti levi, dhn!.\n";
      break;
    case 5:
      std::cout << " Ora vedo, se mi va, ok.\n";
      break;
    case 6:
      std::cout << " Forza, gnamo dai!\n";
      break;
    case 7:
      std::cout << " Chi per la fretta caha nell'ortiha?\n";
      break;
    case 8:
      std::cout << " Maremma scorporata!\n";
      break;
    case 9:
      std::cout << " Sento odore di culo cacioso!\n";
      break;
    default:
      std::cout << " E io che cazzo ne so, scusa.\n";
      break;

  }

  return 0;

}
