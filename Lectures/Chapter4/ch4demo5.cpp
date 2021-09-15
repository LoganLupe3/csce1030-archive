#include <iostream>
using namespace std;

int main(){
  /*
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
        cout << "i = " << i << ";j = " << j << endl;
    }
  }
  */

  int i2 = 0;

  while(i2 < 3){
    int j2 = -2;
    while(j2 < 2){
      cout << "i = " << i2 << ";j = " << j2 << endl;
      ++j2;
    }
    ++i2;
  }


  return 0;
}
