//Write a program to input a three-digit number and display the sum of the digits.

#include<iostream>
using namespace std;
int main(){
    int  num,sum=0;
    cout << "enter three digit no:";
    cin >> num;
    sum = num % 10;
    num = num /10;
    sum += num % 10;
    num = num /10;
    sum += num;
    cout <<"\nsum of three digit :"<< sum;

    return 0;
}