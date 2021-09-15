#include <iostream>
using namespace std;

int main(){
  enum Days {Monday, Tuesday, Saturday, Sunday};

  int my_int;

  Days my_day;
  my_day = Monday; // cannot do: my_day = Friday;

  cout << my_day << endl;


  Days today;
  int choice;
  cout << "Enter day: "; cin >> choice;
  today = static_cast<Days>(choice);
  if(today == Monday){
    cout << "First day of the week" << endl;
  }else{
    cout << "Not the first day of the week" << endl;
  }

  return 0;
}
