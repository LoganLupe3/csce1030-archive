#include <iostream>
using namespace std;

int main(){
  const int SIZE = 6;
  int array[SIZE] = {-9,6,8,-12,-5,3};



  for(int i = 1; i < SIZE; i++){
    if(array[0] > array[i]){
      int temp = array[0];
      array[0] = array[i];
      array[i] = temp;
      for(int j = 0; j > SIZE; j++){
        cout << array[j] << "\t";
      }
      cout << endl;
    }
  }

  return 0;
}
