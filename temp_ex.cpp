#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout<< "Enter the temperature in Fahrenheit: " << "\n";
  std::cin >> tempf;
  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}

/*$ g++ temperature.cpp
$ ./a.out
Enter the temperature in Fahrenheit: 
141
The temp is 60.5556 degrees Celsius.
$*/
