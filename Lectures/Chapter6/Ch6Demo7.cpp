#include <iostream>
using namespace std;

void update(int& num){
    num += 5;
    cout << "Updated in update num: " << num << endl;
}

int main(){
    int num = 10;
    update(num); //passing by reference
    cout << "Updated in main num: " << num << endl;


    return 0;
}