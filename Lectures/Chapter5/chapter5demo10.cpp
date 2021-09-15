#include <iostream>
using namespace std;

int main(){
  /*
  int int_arr[4] = {1,2,3,4};
  //char ch_arr[5] = {'H', 'e', 'l', 'l', 'o'};

  string str = "Hello"; //c++ string

  char ch_arr[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // \0 = null, becomes a c-string

  cout << ch_arr << endl;
  char cstr[10];
  cout << "enter a string: "; cin >> cstr;

  char cstr2[10] = "Friend";
  */

  char name[80];
  cout << "Enter name: "; //cin >> name;
  cin.getline(name, 79); //C-style getline()
  cout << "Name: " << name << endl;

  return 0;
}
