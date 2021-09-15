#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
};

void processAge(Person *p, int num){
    int max = p[0].age;
    string max_person;
    for(int i = 1; i < num; i++){
        if(max < p[i].age){
            max = p[i].age;
            max_person = p[i].name;
        }
    }
    cout << max_person << " is the oldest." << endl;
}

void showArray(Person *p, int num){
    for(int i = 0; i < num; i++){
        cout << "Name: " << p[i].name << "\tAge: " << p[i].age << endl;
    }
}

void getArray(Person *p, int num){
    for(int i = 0; i < num; i++){
        string dummy;
        getline(cin, dummy);
        cout << "Enter name: "; getline(cin, p[i].name);
        cout << "Enter age: "; cin >> p[i].age;
    }
}

int main(){
    Person *p;
    int num;
    cout << "How many people? "; cin >> num;
    p = new Person[num];

    getArray(p, num);
    showArray(p, num);
    processAge(p, num);

    delete [] p;


    return 0;
}