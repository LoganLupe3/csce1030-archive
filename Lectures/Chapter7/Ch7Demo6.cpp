#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    fout.open("output3.txt");
    fin.open("list.dat");
    //fin.fail() // true if file error
    if(fin.fail() || fout.fail()){
        cout << "File error." << endl;
        exit(1); //terminates the program
    }

    int sum = 0;
    const int SIZE = 10;
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++){
        fin >> arr[i];
    }

    for(int i = 0; i < SIZE; i++){
        sum += arr[i];
    }
    fout << "Sum = " << sum << endl;

    fin.close();
    fout.close();

    return 0;
}