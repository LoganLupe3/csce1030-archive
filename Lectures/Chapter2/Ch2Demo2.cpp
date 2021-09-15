#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r = 1.0;
	const double pi = 3.14159;

	double area = pi * pow(r, 2);

	cout << "Area: " << area << endl;

	double num, my_sqrt;
	cout << "enter a double: "; cin >> num; 
	my_sqrt = sqrt(num);
	cout << "The square root of "<< num << " is " << my_sqrt << endl;
	
	return 0;
}
