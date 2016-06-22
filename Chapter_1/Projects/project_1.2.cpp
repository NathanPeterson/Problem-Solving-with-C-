#include<iostream>
using namespace std;

int main(){

  cout << "\n\t############# STARTING PROJECT 1.2 #############\n\n";

  string border, input;

  for(int i =0; i<50; i++){
    border += "*";
  }

  cout << "Generating Logo enter 'ok' to render...";
  cin >> input;

  cout << "\n\n" + border + "\n";
  cout << "\t    C C C  \t  S S S S \t !!\n";
  cout << "\t  C       C\t S       S\t !!\n";
  cout << "\t C         \tS          \t !!\n";
  cout << "\tC          \t S         \t !!\n";
  cout << "\tC          \t  S S S S     \t !!\n";
  cout << "\tC          \t          S    \t !!\n";
  cout << "\t C         \t           S   \t !!\n";
  cout << "\t  C       C\tS         S\n";
  cout << "\t    C C C  \t  S S S S   \t 00\n";

  cout << "\n" + border + "\n\n";
  cout << "COMPUTER SCIENCE IS COOL STUFF!!!\n\n";



  cout << "\n\t############# ENDING PROJECT 1.2 #############\n\n";

  return 0;
}
