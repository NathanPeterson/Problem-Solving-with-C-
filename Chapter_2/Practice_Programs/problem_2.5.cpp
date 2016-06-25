// File Name: problem_2.5.cpp
// Author: Nathan Peterson
// Email Address: nalexpeterson@gmail.com
// Description: Sphere Volume calculator
// Last Changed: June 24, 2016


#include<iostream>
using namespace std;

int main(){
 cout << "\n\t############# STARTING PROBLEM 2.5 #############\n\n";
 cout << "\n\tDescription: Program that calulates the volume of a sphere\n";
 cout << "\tgiven a radius\n\n";

double radius, vm;

cout << "Enter radius of Sphere: ";
cin >> radius;
vm = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
cout << "\n\nThe volume is: " << vm << endl;


 cout << "\n\t############# ENDING PROBLEM 2.5 #############\n\n";
 return 0;
}
