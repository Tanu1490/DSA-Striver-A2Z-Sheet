#include <iostream>  // to take i/p or o/p
using namespace std; // uses std for all functions

int change(string &b){
  b[2] = 'd';
  cout << b;
}

int main()
{
  int age;
  cout << "enter your age:" << endl;
  cin >> age;

  if (age >= 18){
    cout << "You're an adult." << endl;
  }         /*it is not mandatory to write else statement with if stat.*/
  else{
    cout << "your're not an adult.";
  }

  // ---------------------------------

  string b = "rave";
  change(b);
  cout << b;

  //  ------------------------------------
  string x;
  getline(cin, x);
  cout << x;

  return 0;
}

