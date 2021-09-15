#include <iostream>
using namespace std;

int main(){
  int my_int = 15;
  char my_ch = '*';

  if(my_int == 15 && my_ch == '*')
  {
    cout << "This is a possibility" << endl;
  }
  else
  {
    cout << "This is an alternative" << endl;
  }

  if(my_int != 15 || my_ch == '*')
  {
    cout << "This is a possibility" << endl;
  }
  else
  {
    cout << "This is an alternative" << endl;
  }

  double salary = 85000;
  if(salary >= 100000)
  {
    cout << "Six figures salary" << endl;
  }
  
  return 0;
}
