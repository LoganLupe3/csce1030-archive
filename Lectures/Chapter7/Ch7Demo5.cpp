#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    fout.open("output2.txt");
    fin.open("data2.dat");
    //fin.fail() // true if file error
    if(fin.fail() || fout.fail()){
        cout << "File error." << endl;
        exit(1); //terminates the program
    }

    int num1, num2, num3;
    int sum;
    fin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    fout << "Sum = " << sum << endl;
    

    fin.close();
    fout.close();

    return 0;
}