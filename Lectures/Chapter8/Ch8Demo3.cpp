#include <iostream>
using namespace std;

const int SIZE = 3;

struct Student{
    string name;
    int age;
    double gpa;
};

void getData(Student students[], int& num){
    cout << "How many items? "; cin >> num;
    for(int i = 0; i < num; i++){
        string dummy;
        getline(cin, dummy);
        cout << "Enter name of student " << i+1 << ": "; getline(cin, students[i].name);
        cout << "Enter age of student " << i+1 << ": "; cin >> students[i].age;
        cout << "Enter gpa of student " << i+1 << ": "; cin >> students[i].gpa;
    }
}

void showData(Student students[], int num){
    for(int i = 0; i < num; i++){
        cout << "Name of student " << i+1 << ": " << students[i].name << "\t";
        cout << "Age of student " << i+1 << ": " << students[i].age << "\t";
        cout << "Gpa of student " << i+1 << ": " << students[i].gpa << endl;
    }
}

int main(){
    Student students[SIZE];
    int num;
    getData(students, num);
    showData(students, num);
    
    

    return 0;
}
