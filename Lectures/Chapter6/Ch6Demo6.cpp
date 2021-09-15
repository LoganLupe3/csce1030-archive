#include <iostream>
using namespace std;

void test(){
  int x = 5;
  cout << "Test: x: " << x << endl;
}


int main(){
  int x = 12;
  test();
  cout << "Main: x: " << x << endl;

  return 0;
}
