// File Name: problem_2.2.cpp
// Author: Nathan Peterson
// Email Address: nalexpeterson@gmail.com
// Description: Mph to Pace per minute calculator.
// Last Changed: June 24, 2016

#include <iostream>
using namespace std;

int main(){
  cout << "\n\t############# STARTING PROBLEM 2.3 #############\n\n";
  cout << "\n\tDescription: Convert mph to pace per minute.\n\n";


  double mph = 0.0;
  int minutes = 0;
  double seconds = 0.0;

  cout.setf(ios:: fixed);
  cout.setf(ios:: showpoint);
  cout.precision(1);

  cout << "Please enter the miles per hour you went... \n";
  cin >> mph;
  cout << "\nYou went " << mph <<" miles per hour" << endl;

  minutes = static_cast<int>(60/mph);
  seconds = (((60/mph)-minutes)*60);

  cout << "\nwhich translates to "<< minutes << " minutes " << seconds << " seconds per mile\n";

  cout << "\n\t############# ENDING PROBLEM 2.3 #############\n\n";
return 0;
}
