#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Welcome to CSCE1030";

  int len = str.length(); // or size()

  cout << len << endl;
/*
  cout << "Enter string: "; getline(cint, str);
  len = str.length();
  cout << len << endl;
*/

  char ch = str.at(str.length()-1); // access characters
  cout << ch << endl;

  // append()
  string str1 = "Hello ";
  string str2 = "my friend";
  str1.append(str2);
  cout << str1 << endl;

  // adding strings
  str1 = "This is ";
  str2 = "a test";
  string str3 = str1 + str2;
  cout << str3 << endl;

  // finding a string
  string str4 = "Welcome to CSCE1030!!";
  int location = str4.find("1030");
  cout << location << endl;

  // extracting a string (substrings)
  string str5 = str4.substr(15, 4);
  cout << str5 << endl;




  return 0;
}
