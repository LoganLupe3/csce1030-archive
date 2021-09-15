/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date: 10/16/2020
 * Instructor: Dr. Shrestha
 * Description: Compare two user input strings to see if string 1 has a higher ASCII sum using a fucntion
 */


#include <iostream>
using namespace std;

//compares two strings to see which one is larger
bool isLarger(string str1, string str2){
    bool larger;
    //Compute and compare the ASCII sum
    //Set larger so true is ASCII sum of str1 is larger
    //Else set larger to false
    if(str1 > str2){
        larger = true;
    }else{
        larger = false;
    }

    return larger;
}

int main(){
    string str1, str2;
    bool larger;
    //get values for str1 and str2 from the user
    cout << "Enter first string to compare: "; getline(cin, str1);
    cout << "Enter second string to compare: "; getline(cin, str2);

    larger = isLarger(str1, str2);

    if(larger){
        cout << "str1 has larger ASCII sum." << endl;
    }else{
        cout << "str1 does not have larger ASCII sum." << endl;
    }

    return 0;
}