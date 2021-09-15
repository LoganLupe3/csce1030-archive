/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date: 10/9/2020
 * Instructor: Dr. Shrestha
 * Description: Reverse a string using c-string and check if palindrome
 */


#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //initialize necessary variables
    string my_str;
    char reverse[21];
    int i=0, rev;

    //get user input for my_str
    cout << "Enter a string up to 20 characters long: ";
    cin >> my_str;

    rev = my_str.length()-1;

    //create the reverse c-string of the original string
    for(rev; rev >= 0; --rev){
	    reverse[rev] = my_str.at(i);
	    i++;
    }

    // assign null character to last character in c-string
    reverse[my_str.length()] = '\0';

    //compare the original and reversed strings
    //to check if my_str is a palindrome
    if(!strcmp(reverse, my_str.c_str())){
	    cout << my_str << " is a palindrome" << endl;
    }else{
	    cout << my_str << " and " << reverse << " are not the same" << endl;
    }

    return 0;
}
