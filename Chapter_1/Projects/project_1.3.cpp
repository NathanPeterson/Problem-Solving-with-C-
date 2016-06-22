#include<iostream>
using namespace std;

int main(){

  cout << "\n\t############# STARTING PROJECT 1.3 #############\n\n";

  cout << "This Project calculates the sum of all your coins!!\n\n";

  const int PENNY_VALUE = 1;
  const int NICKEL_VALUE = 5;
  const int DIME_VALUE = 10;
  const int QUARTER_VALUE = 25;

  int penny_total = 0;
  int nickel_total = 0;
  int dime_total = 0;
  int quarter_total = 0;

  double totalWorth =0;

  cout << "Enter amount of pennies you have: ";
  cin >> penny_total;
  cout << "Enter amount of nickels you have: ";
  cin >> nickel_total;
  cout << "Enter amount of dimes you have: ";
  cin >> dime_total;
  cout << "Enter amount of quarters you have: ";
  cin >> quarter_total;


  totalWorth = (penny_total * PENNY_VALUE) +
    (nickel_total * NICKEL_VALUE) +
    (dime_total * DIME_VALUE) +
    (quarter_total * QUARTER_VALUE);

  if(totalWorth >= 100){
    totalWorth = totalWorth /100;
    cout << "Your coins are worth: $";
    cout << totalWorth;
    //Could also convert to float to keep remaining 0s
    if(static_cast<int>(totalWorth*100) % 10 == 0){
      cout <<"0";
    }
    cout << " !!\n\n";
  }
  else{
    cout << "Your coins are worth: ";
    cout << totalWorth;
    cout<< " cents.\n\n";
  }




  cout << "\n\t############# ENDING PROJECT 1.3 #############\n\n";

  return 0;
}
