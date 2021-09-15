#include <iostream>
using namespace std;

int main(){
  const int SIZE = 50;
  int arr[SIZE];
  int list_size;
  cout << "How big is your list of numbers? "; cin >> list_size;

  double sum = 0;
  float avg;
  for(int i = 0; i < list_size; i++){
    cout << "Enter integer for index " << i << ": "; cin >> arr[i];
    sum += arr[i];
  }
  avg = sum/list_size;

  cout << "Average: " << avg << endl;


  return 0;
}
