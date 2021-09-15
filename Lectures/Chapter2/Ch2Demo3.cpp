#include <iostream>
using namespace std;

int main()
{
	string str;
	str = "Hello world";
	
	cout << "str = " << str << endl;

	string name;
	cout << "Enter name: "; 
	//cin >> name; reads only one word
	getline(cin, name); //reads the whole line
	cout << "You entered : " << name << endl;

	string fname, lname;
	cout << "Enter name: ";
	cin >> fname >> lname;
	cout << "You entered: " << fname + " " + lname << endl; 


	return 0;
}	
