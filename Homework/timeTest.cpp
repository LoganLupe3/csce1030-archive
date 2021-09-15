#include <ctime>
#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){
  time_t rawtime;
  string time_str;
  rawtime = time(&rawtime);
  time_str = ctime(&rawtime);
  string month_str = time_str.substr(4,3);
  string hour_str = time_str.substr(11, 2);
  int hour = stoi(hour_str);

  cout << month_str << endl;
}
