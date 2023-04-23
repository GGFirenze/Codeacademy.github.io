#include <iostream>

int main() {
  
  double EarthWeight; 
  int PlanetNumber;

  std::cout << "Hello, Kidnickuman! What is your earth weight? ";
  std::cin >> EarthWeight;
  std::cout << "\n1 - Mercury; 2 - Venus; 3 - Mars; 4 - Jupiter; 5 - Saturn; 6 - Uranus; 7 - Neptune. \nPlease, enter a number for the planet you want to fight on, here: ";
  std::cin >> PlanetNumber;
  
 if ( PlanetNumber == 1) { 

   EarthWeight = EarthWeight * 0.38;
 } else if ( PlanetNumber == 2){
   EarthWeight = EarthWeight * 0.91;
 } else if (PlanetNumber == 3){
   EarthWeight = EarthWeight * 0.38;
 } else if (PlanetNumber == 4){
   EarthWeight = EarthWeight * 2.34;
 } else if (PlanetNumber == 5){
   EarthWeight = EarthWeight * 1.06;
 } else if (PlanetNumber == 6){
   EarthWeight = EarthWeight * 0.92;
 } else if (PlanetNumber == 7){
   EarthWeight = EarthWeight * 1.19;
 }

std::cout << "\nYour weight for this planet is: " << EarthWeight << ". Welcome to the Ultimate Muscle Galaxy Tournament!\n";
  }
