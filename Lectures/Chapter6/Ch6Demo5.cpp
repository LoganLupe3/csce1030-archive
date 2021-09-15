#include <iostream>
#include <cmath>
using namespace std;

long func1(int num){
  num = pow(num, 3);
  return num;
}
double func2(int num){
  int num2 = num+3;
  long inter = func1(num2);
  double result = sqrt(inter);
  return result;
}

int main(){
  int num = 15;
  double result = func2(num);
  cout << "Result: " << result << endl;

  return 0;
}
