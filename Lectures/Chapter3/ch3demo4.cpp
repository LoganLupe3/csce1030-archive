#include <iostream>
using namespace std;

int main(){

	int score, threshold = 60;

	cout << "Enter your score: ";
	cin >> score;

	if(score >= threshold && <= 100){
		cout << "Passed" << endl;
	}else{
		cout << "Failed" << endl;
	}

	return 0;
}
