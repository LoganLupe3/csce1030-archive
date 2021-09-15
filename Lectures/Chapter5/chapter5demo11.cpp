#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char src[25] = "Hello friend!!!";
  char dest[25];

  //dest = src Only works with C++ string
  strcpy(dest, src); //alternative: strncpy(str,str2,n) where n is the amount of characters to copy
  cout << "Dest: " << dest << endl;

  //src.length() C++ style
  int len = strlen(src);
  cout << "Length: " << len << endl;

  //append() or + to concat in C++
  char cstr[50] = "Welcome";
  char cstr2[50] = " to the class!!!";
  cout << "Before: " << cstr << endl;
  strcat(cstr, cstr2); // alternative: strncat(str,str2,n) where n is the amount of characters to concatinate
  cout << "After: " << cstr << endl;

  //if(str == str2) C++ comparison
  char cstr3[10] = "Hello";
  char cstr4[15] = "Hello again";
  if(strcmp(cstr3, cstr4)){
    cout << "Not equal" << endl;
  }else{
    cout << "Equal" << endl;
  }

  return 0;
}
