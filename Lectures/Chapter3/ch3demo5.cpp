#include <iostream>
using namespace std;

int main(){
  int score, threshold = 60;

	cout << "Enter your score: ";
	cin >> score;


  if(score > 100){
    cout << "Score is too big" << endl;
  }
  else if(score < 0){
    cout << "Score cannot be negative" << endl;
  }

  if(score >= threshold){
		cout << "Passed" << endl;
	}

  else{
		cout << "Failed" << endl;
	}


  return 0;
}
