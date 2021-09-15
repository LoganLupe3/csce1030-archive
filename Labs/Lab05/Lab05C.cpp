/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/25/2020
 * Instructor:	Dr. Shrestha
 * Description:	for loop
 */


#include <iostream>
#include <string>
using namespace std;

int main(){
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  int alphaCount = 0;
  int digitCount = 0;
  int spaceCount = 0;
  int specialCount = 0;
  for(int i = 0; i < input.length(); i++){
    if(isalpha(input.at(i))){
      alphaCount++;
    }else if(isdigit(input.at(i))){
      digitCount++;
    }else if(isspace(input.at(i))){
      spaceCount++;
    }else{
      specialCount++;
    }
  }

  cout << "Alpha count: " << alphaCount << endl;
  cout << "Digit count: " << digitCount << endl;
  cout << "Whitespace count: " << spaceCount << endl;
  cout << "Special Char count: " << specialCount << endl;


  return 0;
}
