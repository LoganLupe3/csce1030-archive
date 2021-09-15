#include <iostream>
using namespace std;

int main(){
    string name; int age;
    cout << "Enter your age: "; cin >> age;
    cin.ignore(1,'\n');
    cout << "Enter your name: "; getline(cin, name);

    cout << name << " " << age << endl;





    return 0;
}