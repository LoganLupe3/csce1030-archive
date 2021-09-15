#include <iostream>
using namespace std;

int main(){
  int i = 0;
  while(i < 5){
    cout << "Hello" << endl;
    i++;
  }

  // display all odd numbers between 19-29 inclusive
  for(int j = 19; j <= 29; j++){
    if(j % 2 == 1){
      cout << j << endl;
    }
  }

  // display all numbers between 35-29 inclusive
  for(int i = 35; i >= 29; i--){
    cout << i << "\t";
  }



  return 0;
}
