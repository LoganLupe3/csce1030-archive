#include <iostream>
using namespace std;

void func(int a, char b = '#', double c = 7.5){
    cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
}

int main(){
    int x = 20;
    char y = '*';
    double z = 2.56;
    cout << "First call: ";
    func(x,y,z);

    cout << "Second call: ";
    func(12, '&', 3.96);

    cout << "Third call: ";
    func(35, 'f');

    return 0;
}