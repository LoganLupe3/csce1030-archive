#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    double gpa;
};

Student getData(string name, int age, double gpa){
    Student s;
    s.name = name;
    s.age = age;
    s.gpa = gpa;
    return s;
}

int main(){ 
    Student s1;
    s1 = getData("Eric Johnson", 22, 3.1);
    cout << "Info for student 1:" << endl;
    cout << "Name: " << s1.name << "\nAge: " << s1.age << "\nGPA: " << s1.gpa << endl;
    return 0;
}
