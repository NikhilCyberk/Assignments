//Write a program to swap values of two int variables without using a third variable.

#include<iostream>
using namespace std;
int main(){
    int  num1,num2;
    cout << "enter a number 1: ";
    cin >> num1;
    cout << "enter a number 2: ";
    cin >> num2;
    cout <<"*****before swap*****\n";
    cout <<"number 1:"<<num1<<"\nnumber 2:"<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    cout <<"*****after swap*****\n";
    cout <<"number 1:"<<num1<<"\nnumber 2:"<<num2;

    return 0;
}