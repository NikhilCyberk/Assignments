/*Write a program to print greater between two numbers. Print one number of both are 
the same*/
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "enter a number 1:";
    cin >> num1;
    cout << "\nenter a number 2:";
    cin >> num2;
    if(num1==num2){
        cout << "\nboth number are same:";
    }
    else if (num1 > num2){
        cout << num1<<" is greater\n";
    }
    else{
        cout << num2<<" is greater\n";
    }
    return 0;
}