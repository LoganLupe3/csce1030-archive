/*
  String comparison
*/



#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello";
  string str2 = "hello";

  if(str == str2){
    cout << "They are the same" << endl;
  }else{
    cout << "They are different" << endl;
  }

  if(str > str2){
    cout << str << " is greater" << endl;
  }else{
    cout << str2 << " is greater" << endl;
  }

  return 0;
}
