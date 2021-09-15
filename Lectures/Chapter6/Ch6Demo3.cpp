#include <iostream>
using namespace std;

bool test_string(string str, int length){
  bool too_long;
  if(str.length() > length){
    too_long = true;
  }else{
    too_long = false;
  }
  return too_long;
}

int main(){
  string str = "test this string.";
  int length = 10;

  if(test_string(str, length)){
    cout << "String is too long" << endl;
  }else{
    cout << "String is not too long" << endl;
  }

  return 0;
}
