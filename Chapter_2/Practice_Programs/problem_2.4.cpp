// File Name: problem_2.4.cpp
// Author: Nathan Peterson
// Email Address: nalexpeterson@gmail.com
// Description: MadLib game
// Last Changed: June 24, 2016


#include<iostream>
using namespace std;

int main(){
 cout << "\n\t############# STARTING PROBLEM 2.4 #############\n\n";
 cout << "\n\tDescription: Program that plays the game of MadLib";

 string teacher = "";
     string name = "";
     string food = "";
     string num = "";
     string adj = "";
     string color = "";
     string animal = "";

     cout << "This is a Mad Lib that will hopefully make you laugh... \n";

     cout << "Please enter your teacher/instructor's name: ";
     getline(cin, teacher);

     cout << "\n Please enter your name: ";
     getline(cin, name);

     cout << "\n Please enter a food: ";
     getline(cin, food);

     cout << "\n Please enter a number between 100 and 120: ";
     getline(cin, num);

     cout << "\n Please enter an adjective: ";
     getline(cin, adj);

     cout << "\n Please enter a color: ";
     getline(cin, color);

     cout << "\n Please enter an animal: ";
     getline(cin, animal);

     cout << "Dear Instructor " << teacher << ", \n\n";
     cout << "I am sorry that I am unable to turn in my homework at this time. First,\n";
     cout << "I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I\n";
     cout << "came down with a fever of " << num << ". Next, my " << adj << " pet\n";
     cout << animal << " must have smelled the remains of the " << food << " on my homework,\n";
     cout << "because he ate it. I am currently rewriting my homework and hope you\n";
     cout << "will accept it late.\n\n";
     cout << "Sincerely,\n";
     cout << name << endl;

 cout << "\n\t############# ENDING PROBLEM 2.4 #############\n\n";
 return 0;
}
