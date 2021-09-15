#include <iostream>
using namespace std;

struct Student{
    string name;
    double gpa;
    long int id;
};

struct Employee{
    string name;
    double salary
    int id;
};

/*
    Commonness in the name of the variables in each of the structures is purely coincidental
    and has no effect. You can have as many variables with the same names in different structures that you want.
*/

int main(){
    Student st;

    Employee emp;

    st.name = "John Smith";
    emp.name = "David Jones";

    


    return 0;
}