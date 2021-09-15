#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file_in;
    string fname, lname;
    double salary;
    char gender;
    file_in.open("input_data.dat");
    if(file_in.fail()){
        cout << "File error" << endl;
        exit(1);
    }

    double sum_salary = 0;
    int count = 0;
    int male_count = 0;
    int female_count = 0;
    while(file_in >> fname >> lname >> salary >> gender){
        sum_salary += salary;
        count++;
        if(gender == 'M'){
            male_count++;
        }else{
            female_count++;
        }
    }
    cout << "Average salary: " << sum_salary/count << endl;
    cout << "Number of males: " << male_count << endl;
    cout << "Number of females: " << female_count << endl;


    return 0;
}