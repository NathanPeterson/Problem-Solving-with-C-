// File Name: problem_2.2.cpp
// Author: Nathan Peterson
// Email Address: nalexpeterson@gmail.com
// Description: Babylonian Algorithm for square roots
// Last Changed: June 24, 2016


#include<iostream>
using namespace std;

int main(){
 cout << "\n\t############# STARTING PROBLEM 2.2 #############\n\n";
 cout << "\n\tDescription: Program that calculates the square root";
 cout << "\nusing the Babylonian Algorithm\n";

 double n, r, guess;
 char ans;

 do{
    int count =0;

    cout << "Enter a value: ";
    cin >> n;
    cout << "\nCalculating square root...\n\n";

    guess = n/2;
    while(count  < 100){
      r = n / guess;
      guess = (guess + r)/2;
      count++;
    }

    cout << "The square root of " << n << " is: " << guess << endl;
    cout << "\nWould you like to try another number? (y or n)\n";
    cin >> ans;

  }while(ans == 'y' || ans == 'Y');

 cout << "\n\t############# ENDING PROBLEM 2.2 #############\n\n";
 return 0;
}
