#include <iostream>
using namespace std;

const int SIZE = 5;

struct Student{
    string name;
    int age;
    double gpa;
    int scores[SIZE];
};

int main(){
    Student s1;
    s1.name = "test"; s1.age = 24; s1.gpa = 3.1;
    s1.scores[0] = 80;
    s1.scores[1] = 90;
    s1.scores[2] = 79;
    s1.scores[3] = 72;
    s1.scores[4] = 92;

    double sum;
    for(int i = 0; i < SIZE; i++){
        sum += s1.scores[i];
    }
    double average = sum/SIZE;
    cout << average << endl;
    
    

    return 0;
}
