//Write a program to check whether a given number is a three-digit number or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number :";
    cin >> num;
    if ((99 << num)&(1000>>num)){
        cout << "\nyou number is correct:";
    }
    else{
        cout << "XXX enter three digit number";
    }
    return 0;
}