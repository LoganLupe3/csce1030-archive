#include <iostream>
using namespace std;

int main(){
  int val;

  //int val; //compilation error, redeclaration

  for(int i = 0; i < 4; i++){
    cout << "This" << endl;
  }
  for(int i = 0; i < 5; i++){
    cout << "That" << endl;
  }

  return 0;
}
