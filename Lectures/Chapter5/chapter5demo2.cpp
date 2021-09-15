#include <iostream>
using namespace std;

int main(){
  const int SIZE = 3;
  int arr[SIZE];
  float sum = 0;
  float avg;
  for(int i = 0; i < SIZE; i++){
    cout << "Enter an integer: "; cin >> arr[i];
    sum += arr[i];
  }
  avg = sum/SIZE;
  cout << sum << endl;
  cout << avg << endl;




  return 0;
}
