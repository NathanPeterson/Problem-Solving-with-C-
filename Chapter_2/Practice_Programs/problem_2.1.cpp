// File Name: problem_2.1.cpp
// Author: Nathan Peterson
// Email Address: nalexpeterson@gmail.com
// Description: Chapter 2 Practice Problem 1
// Last Changed: June 22, 2016


#include<iostream>
using namespace std;

int main(){
  cout << "\n\t############# STARTING PROBLEM 2.1 #############\n\n";
  cout << "\n\tDescription: This program will read the weight of cereal packages\n";
  cout << "in ounces and convert to tons and calculate the amount of boxes needed for 1 ton.\n";

  const double METRIC_TON = 35273.92;

  double package_weight;
  double total_weight = 0;
  double packages_in_ton = 0;

  char ans;

  do{
    cout << "\nHow much does your breakfast cereal package weigh in ounces? ";
    cin >> package_weight;
    cout << "Your package weighs " << package_weight << " ounces\n";
    cout << "Your package weighs " << (package_weight/METRIC_TON) << " metric tons\n\n";

    while(total_weight < METRIC_TON){
      total_weight += package_weight;
      packages_in_ton++;
    }

    cout << "It would take " << packages_in_ton << " packages of your cereal to equate\n";
    cout << "to ONE Metric Ton!\n\n";
    total_weight = 0;
    packages_in_ton = 0;

    cout << "Would you like to check another box of cereal? (Y or n) \n";
    cin >> ans;

  } while(ans =='y' || ans == 'Y');

  cout << "\n\t############# ENDING PROBLEM 2.1 #############\n\n";
  return 0;
}
