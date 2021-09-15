#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char cstr[10];
  cout << "Enter your data: "; cin >> cstr;

  //cstr= "1234";
  int num = atoi(cstr);
  cout << "Result: " << num*5 << endl;

  return 0;
}
