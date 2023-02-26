//Write a program to print unit digit of a given number
#include<iostream>
using namespace std;
int main(){
    int  n,unit_num;
    cout << "enter a number: ";
    cin >> n;
    unit_num= n % 10;
    cout <<"unit place of the digit :"<< unit_num;


    return 0;
}
