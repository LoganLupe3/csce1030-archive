#include <iostream>
#include <cmath>
using namespace std;

int main(){
  // conditional expressions
  int x = 5, y = 6;
  /*
  if(x < y){
    cout << "x is less than y" << endl;
  }else{
    cout << "x is not less than y" << endl;
  }
  */
  // conditional
  x < y? cout << "x is less than y" << endl : cout << "x is not less than y";


  // floating point comparison
  double a = 1/3;
  (fabs(a - 0.333) == 1e-5) ? cout << "is equal" << endl : cout << "not equal" << endl;


  return 0;
}
