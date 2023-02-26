//Write a program to print a given number without its last digit.

#include<iostream>
using namespace std;
int main(){
    int  n,without_unit_num;
    cout << "enter a number: ";
    cin >> n;
    without_unit_num= n / 10;
    cout <<"without unit place of the digit :"<< without_unit_num;


    return 0;
}
