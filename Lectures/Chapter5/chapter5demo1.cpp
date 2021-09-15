// intro to arrays

#include <iostream>
using namespace std;

int main(){
  int arr[5];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  for(int i = 0; i < 5; i++){
    cout << arr[i] << endl;
  }

  double dbl_array[4] = {1.2,3.1,6.5,3.6};

  cout << dbl_array << endl;


  return 0;
}
