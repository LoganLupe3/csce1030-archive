#include <iostream>
using namespace std;

int main(){
  char ch;
  cout << "Enter a character: "; cin >> ch;

  if(isalpha(ch)){
    cout << ch << " is a letter" << endl;
  }else{
    cout << ch << " is not a letter" << endl;
  }



  return 0;
}
