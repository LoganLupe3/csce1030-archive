#include <iostream>
using namespace std;


int add5(int num);

int main(){
  int num;
  cout << "Enter a number: "; cin >> num;
  //int result = num+5; //moved to function
  int result = add5(num);
  cout << "Result: " << result << endl;

  return 0;
}

int add5(int num){
  return num+5;
}
