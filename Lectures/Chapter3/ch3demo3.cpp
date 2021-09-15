#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if(num % 2 == 0){
		cout << num << " is even" << endl;
		if(num % 3 == 0){
			cout << num << " is divisible by 3" << endl;
		}else{
			cout << num << " is not divisible by 3" << endl;
		}
	}else{
		cout << num << " is odd" << endl;
	}

	return 0;
}
