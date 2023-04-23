#include<iostream>
int main() {
  int TotalParticipants, Surveys;
  double ReturnRate = (Surveys / TotalParticipants) * 100;
  std::cout << "Please, type the total number of participants: ";
  std::cin >> TotalParticipants;
  std::cout << "Please, type the total number of surveys: ";
  std::cin >> Surveys;
  std::cout << "Based on the data provided, your return rate percentage is: " << ReturnRate << ".\n";
  
  if (ReturnRate >= 20.0) {
  std::cout << "You rock! Keep up with the good work!\n";
} else if (ReturnRate > 19.0 && ReturnRate < 20.0){
  std::cout << "Come on, dude! Almost there, don't give up now!";
} else {
  std::cout << "Sell this survey as there is no tomorrow! Sooner or later this numbers will go up! Also, your line managers suck!";
}
}
