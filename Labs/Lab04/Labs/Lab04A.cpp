/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/16/2020
 * Instructor:	Dr. Shrestha
 * Description:	if-else statements
 */


#include <iostream>
using namespace std;

int main(){
  int num_cookies;
  int num_dozen;
  float total_cost;
  const float STANDARD_PRICE = 0.89;

  cout << "Enter the number of cookies you would like: ";
  cin >> num_cookies;

  num_dozen = num_cookies / 12;

  if(num_dozen == 0){
    total_cost = STANDARD_PRICE * num_cookies;
  }else if(num_dozen > 0 && num_dozen < 5){
    total_cost = (STANDARD_PRICE - (STANDARD_PRICE * 0.1)) * num_cookies;
  }else{
    total_cost = (STANDARD_PRICE - (STANDARD_PRICE * 0.25)) * num_cookies;
  }


  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  if(num_cookies > 0){
    cout << "Price for " << num_cookies << " cookies: $" << total_cost << endl;
  }else{
    cout << "Invalid amount of cookies enter (make sure number of cookies isn't negative or 0)" << endl;
  }


  return 0;
}
