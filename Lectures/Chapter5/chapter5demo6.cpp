//Bubble sort

#include <iostream>
using namespace std;

int main(){
  const int SIZE = 6;
  int array[SIZE] = {9,-6,8,-12,-25,3};

  for(int i = 0; i < SIZE; ++i){
    cout << array[i] << "\t";
  }
  cout << endl;

  for(int i = 0; i < SIZE-1; ++i){
    for(int j = (i+1); j < SIZE; ++j){
      if(array[i] > array[j]){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  for(int i = 0; i < SIZE; ++i){
    cout << array[i] << "\t";
  }
  cout << endl;



  return 0;
}
