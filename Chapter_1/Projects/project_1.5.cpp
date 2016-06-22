#include<iostream>
using namespace std;

int main(){

  cout << "\n\t############# STARTING PROJECT 1.5 #############\n\n";

  string border;
  char entered_letter;
  for(int i =0; i<30; i++){
    border += "*";
  }

  cout << "Generating Logo enter a character you want\n";
  cout << "it to render in... ";
  cin >> entered_letter;

  cout << "\n\n" + border + "\n";
  cout << "\t    ";
    cout << entered_letter;
    cout << " ";
    cout << entered_letter;
    cout << " ";
    cout << entered_letter;
    cout << "\n";
    cout << "\t  ";
    cout << entered_letter;
    cout << "       ";
    cout << entered_letter;
    cout << "\n";
    cout << "\t ";
    cout << entered_letter;
    cout << "         \n";
    cout << "\t";
    cout << entered_letter;
    cout <<"\n";
    cout << "\t";
    cout << entered_letter;
    cout << "\n";
    cout << "\t";
    cout << entered_letter;
    cout << "\n";
    cout << "\t ";
    cout << entered_letter;
    cout << "\n";
    cout << "\t  ";
    cout << entered_letter;
    cout << "       ";
    cout << entered_letter;
    cout << "\n";
    cout << "\t    ";
    cout << entered_letter;
    cout << " ";
    cout << entered_letter;
    cout << " ";
    cout << entered_letter;
    cout << "\n";

  cout << "\n" + border + "\n\n";
  cout << "COMPUTER SCIENCE IS COOL STUFF!!!\n\n";

  cout << "\n\t############# ENDING PROJECT 1.5 #############\n\n";

  return 0;
}
