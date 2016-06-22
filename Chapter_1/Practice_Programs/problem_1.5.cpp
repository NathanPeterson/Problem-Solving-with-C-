#include<iostream>
using namespace std;

int main(){
  int width_in_feet, height_in_feet, totalLength;

  cout << "\n\t############# STARTING PROBLEM 1.5 #############\n\n";

  cout << "Program: Calculate the total length of fence needed to enclose\n";
  cout << "a rectangular area that is width feet long, height feet tall.\n\n";

  cout << "Press return after entering a number.\n";
  cout << "Enter the width of the rectangle needed in feet:\n";
  cin >> width_in_feet;

  cout << "Enter the height of the rectangle needed in feet:\n";
  cin >> height_in_feet;

  totalLength = height_in_feet * width_in_feet;

  cout << "\nIf you want a ";
  cout << width_in_feet;
  cout << " feet long fence  \n";
  cout << "and ";
  cout << height_in_feet;
  cout << " feet tall fence, then\n";
  cout << "you will need ";
  cout << totalLength;
  cout << " of fence to build the enclosure.\n";

  cout << "\n\t############# ENDING PROBLEM 1.5 #############\n\n";

  return 0;
}
