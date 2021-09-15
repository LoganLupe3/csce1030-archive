#include <iostream>
using namespace std;

void update(double& d, char& c){
    d = 3.6; c = '*';
}

int main(){
    double d = 7.5;
    char c = '+';
    cout << "Before: d = " << d << "\tc = " << c << endl;
    update(d, c);
    cout << "After: d = " << d << "\tc = " << c << endl;

    return 0;
}