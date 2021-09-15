#include <iostream>
#include <string>
using namespace std;

int countWords(string str){
    int words = 1;
    if(str.length() == 0){
        return 0;
    }
    for(char ch : str){
        if(ch == ' '){
            words++;
        }
    }
    return words;
}

int main(){
    string str;

    cout << "Enter a string: "; getline(cin, str);
    cout << "The string that you entered has " << countWords(str) << " words in it." << endl;


    return 0;
}