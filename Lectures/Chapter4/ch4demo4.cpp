#include <iostream>
using namespace std;

int main(){
  enum Days {Sunday=1, Monday, Friday, Saturday, Quit};
  int choice;
  bool repeat = true;
  do {
    cout << "1. Sunday\n2. Monday\n3. Friday\n4. Saturday\n5. Quit\nChoose a day: "; cin >> choice;
    Days day = static_cast<Days>(choice);

    switch (day) {
      case Sunday:
        cout << "sunday" << endl;
        break;
      case Monday:
        cout << "monday" << endl;
        break;
      case Friday:
        cout << "friday" << endl;
        break;
      case Saturday:
        cout << "saturday" << endl;
        break;
      case Quit:
        cout << "Quit" << endl;
        repeat = false;
        break;
      default:
        cout << "wrong choice" << endl;
    }
  } while(repeat);


  return 0;
}
