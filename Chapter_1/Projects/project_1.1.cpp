#include<iostream>
using namespace std;

int main(){

  cout << "\n\t############# STARTING Project 1.1 #############\n\n";

  int first_interger, second_integer, sum, product;

  cout << "This Project reads in two integers and then outputs both their\n";
  cout << "sum and product.\n";

  cout << "\nEnter the first integer: ";
  cin >> first_interger;

  cout << "Enter the second integer: ";
  cin >> second_integer;

  sum = first_interger + second_integer;
  product = first_interger * second_integer;

  cout << "\nThe sum of the two integers is: ";
  cout << sum;

  cout << "\nThe product of the two integers is: ";
  cout << product;

  cout << "\n\n\t############# ENDING Project 1.1 #############\n\n";

  return 0;
}
