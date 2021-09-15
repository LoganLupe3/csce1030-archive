#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("input_text.txt");
    if(fin.fail()){
        cout << "File error." << endl;
        exit(1);
    }

    char ch;
    
    /*
    while(fin >> ch){ // extraction operator does not read whitespace
        cout << ch;
    }
    */
    
    ch = fin.get();
    while(!fin.eof()){ //eof(): end of file, true if file is over
        cout << ch;
        ch = fin.get();
    }
    cout << endl;


    fin.close();

    return 0;
}