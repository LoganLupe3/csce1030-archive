#include <iostream>
using namespace std;

int main(){
  const int SIZE = 6;
  int source[SIZE] = {-9,6,8,12,-5,3};
  int dest[SIZE];

  //dest = source; Cannot assign one array to another
  for(int i = 0; i < SIZE; i++){
    dest[i] = source[SIZE-(i+1)];
  }

  for(int i = 0; i < SIZE; i++){
    cout << dest[i] << "\t";
  }
  cout << endl;


  return 0;
}
