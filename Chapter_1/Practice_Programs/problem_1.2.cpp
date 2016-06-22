#include<iostream>
using namespace std;

int main(){
  int number_of_pods, peas_per_pod, total_peas;

  cout << "\n\t############# STARTING PROBLEM 1.1 #############\n\n";

  cout << "Hello!\n\n";

  cout << "Press return after entering a number.\n";
  cout << "Enter the number of pods:\n";
  cin >> number_of_pods;

  cout << "Enter the number of peas in a pod:\n";
  cin >> peas_per_pod;

  total_peas = number_of_pods * peas_per_pod;

  cout << "\nIf you have ";
  cout << number_of_pods;
  cout << " pea pods \n";
  cout << "and ";
  cout << peas_per_pod;
  cout << " peas in each pod, then\n";
  cout << "you have ";
  cout << total_peas;
  cout << " peas in all the pods.\n";

  cout << "\nGood Bye!.\n";

  cout << "\n\t############# ENDING PROBLEM 1.1 #############\n\n";

  return 0;
}
