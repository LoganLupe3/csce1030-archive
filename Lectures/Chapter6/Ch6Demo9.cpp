#include <iostream>
using namespace std;

const int SIZE = 5;

void getArr(int arr[]){
    cout << "Enter " << SIZE << " integers:" << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> arr[i];
    }
}

void showArr(int arr[]){
    cout << "You entered: ";
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumArr(int arr[]){
    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[SIZE];

    getArr(arr);
    showArr(arr);
    cout << "Sum of array = " << sumArr(arr) << endl;

    return 0;
}