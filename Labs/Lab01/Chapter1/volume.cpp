#include <iostream>
using namespace std;

int main(){

	float radius;
	float height;
	float pi = 3.14159;

	cout << "Height: ";
	cin >>  height;
	cout << "Radius: ";
	cin >>  radius;
	float volume = pi*radius*radius*height;
	cout << volume;

	return 0;
}
