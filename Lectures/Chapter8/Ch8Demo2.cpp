#include <iostream>
using namespace std;

const int SIZE = 3;

struct Student{
    string name;
    int age;
    double gpa;
};

int main(){
    Student students[SIZE];

    for(int i = 0; i < SIZE; i++){
        cout << "Enter name of student " << i+1 << ": "; getline(cin, students[i].name);
        cout << "Enter age of student " << i+1 << ": "; cin >> students[i].age;
        cout << "Enter gpa of student " << i+1 << ": "; cin >> students[i].gpa;
        string dummy;
        getline(cin, dummy);
    }

    for(int i = 0; i < SIZE; i++){
        cout << "Name of student " << i+1 << ": " << students[i].name << "\t";
        cout << "Age of student " << i+1 << ": " << students[i].age << "\t";
        cout << "Gpa of student " << i+1 << ": " << students[i].gpa << endl;
    }
    

    return 0;
}
