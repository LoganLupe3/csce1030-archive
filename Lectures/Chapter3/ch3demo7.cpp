#include <iostream>
using namespace std;

int main(){
  int my_int;
  my_int = 20;
  bool my_bool;
  my_bool = true;

  bool test = true;
  bool test2 = (my_int == 20); // test2 = true;

  if(test2){
    cout << "Do this." << endl;
  }


  // bool-int conversion
  bool my_test_bool = true;
  int my_test_int = my_test_bool;
  cout << my_test_int << endl;

  my_test_int = 0;
  my_test_bool = my_test_int;
  if(my_test_bool){
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }

  return 0;
}
