//rite a program to check whether the given number is even or odd using a bitwise operator.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number to check prime or not :";
    cin >> num;
    if (num & 1){
        cout << "number is odd";
    }
    else{
        cout << "number is even";
    }
    return 0;
}
