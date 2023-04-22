#include <iostream>

int main() {
  
  double tempf = 65;
  double tempc = (tempf - 32)/1.8;
  
  tempc = (tempf - 32)/1.8;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
  
  
}

/*$ g++ temperature.cpp
$ ./a.out
The temp is 18.3333 degrees Celsius.
$ */
