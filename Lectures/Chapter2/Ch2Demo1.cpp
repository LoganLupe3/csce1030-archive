#include <iostream>
using namespace std;

int main()
{
	int my_int;
	float my_float;
	double my_dbl;
	char my_char;

	my_int = -30;
	my_float = -0.75;
	my_dbl = 3.778;
	my_char = 'c';

	int my_int2;
	char my_char2;

	cout << "Enter an integer: ";
	cin >> my_int2;
	cout << "Enter a character: ";
	cin >> my_char2;

	cout << "Integer: " << my_int2 << "\tChar: " << my_char2 << endl;
	
	int my_int3 = my_int*2 + my_int2;

	float x = 22/7;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(7);
	cout << x;

	return 0;
}
