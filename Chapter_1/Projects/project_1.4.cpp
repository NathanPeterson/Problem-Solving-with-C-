#include<iostream>
using namespace std;

int main(){

  cout << "\n\t############# STARTING PROJECT 1.4 #############\n\n";

  cout << "This Project calculates the distance an object will fall\n";
  cout << "in a certain amout of time in seconds.\n\n";

  const int ACCELERATION = 32;
  int time_in_seconds =0;
  double distance = 0;

  cout << "Enter the total duration of your free fall in seconds: ";
  cin >> time_in_seconds;

  distance = (ACCELERATION * (time_in_seconds * time_in_seconds))/2;

  cout << "\nYou have dropped ";
  cout << distance;
  cout << " feet in ";
  cout << time_in_seconds;
  cout << " seconds.\n";


  cout << "\n\t############# ENDING PROJECT 1.4 #############\n\n";

  return 0;
}
