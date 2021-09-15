/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/09/2020
 * Instructor:	Dr. Shrestha
 * Description:	Reading in strings, seeded random numbers, static casting
 */


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main(){
  srand(time(NULL));

  string name;
  double salary;
  int rate = rand() % 5 + 1;


  cout << "Enter a name: ";
  getline(cin, name);
  //cout << name << endl;
  cout << "Enter the salary of " << name << ": ";
  cin >> salary;
  double bonus = salary * (static_cast<double>(rate)/100);

  cout << "rate: " << rate << endl;
  cout << setprecision(3) << name << " earned a bonus of " << bonus << endl;


  return 0;
}
