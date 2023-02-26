/*//Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/

#include<iostream>
using namespace std;
int main(){
    int num,res;
    cout << "enter a number :";
    cin >> num;
    cout << "\nenter appand number :";
    cin >> res;
    num= num*10;
    num=num+res;
    cout << "\n"<<num;
    return 0;
}
