#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 4;

struct Employee{
    string fname;
    string lname;
    double salary;
    char gender;
};

int main(){
    ifstream in;
    Employee emp[SIZE];
    //ofstream out;
    in.open("input.dat");
    if(in.fail()){
        cout << "Issue reading file" << endl;
        exit(EXIT_FAILURE);
    }

    int count = 0;

    cout << "Before sorting:\n";
    while(in >> emp[count].fname >> emp[count].lname >> emp[count].salary >> emp[count].gender){
        cout << emp[count].fname << "\t" << emp[count].lname << "\t"  << emp[count].salary << "\t"  << emp[count].gender << endl;
        count++;
    }
    cout << endl;

    for(int i = 0; i < count; i++){
        for(int j = i+1; j < count; j++){
            if(emp[i].salary < emp[j].salary){
                Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    cout << "After sorting:\n";
    for(int i = 0; i < count; i++){
        cout << emp[i].fname << "\t"  << emp[i].lname << "\t"  << emp[i].salary << "\t"  << emp[i].gender << endl;
    }

    in.close();

    return 0;
}