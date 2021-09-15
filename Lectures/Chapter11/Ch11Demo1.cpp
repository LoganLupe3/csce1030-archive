#include <iostream>
using namespace std;

int main(){
    //int *p1, *p2; // declare multiple pointers in the same statement
    int v1 = 10, v2 = 15;

    typedef int* IntPtr;
    IntPtr p1, p2;

    p1 = &v1;
    p2 = &v2;

    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;

    return 0;
}