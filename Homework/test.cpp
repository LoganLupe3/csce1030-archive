#include <iostream>
#include <string>
using namespace std;

void fixName(string& name){
    name.at(0) = toupper(name.at(0));
    for(int i = 1; i < name.length(); i++){
        name.at(i) = tolower(name.at(i));
        if(name.at(i) == ' '){
            name.at(i+1) = toupper(name.at(i+1));
            i++;
        }
    }
}

int main(){
    string name;
    cout << "Enter name: "; getline(cin, name);
    fixName(name);
    cout << "Fixed name: " << name << endl;

    return 0;
}