//Write a program to find the position of first 1 in LSB


#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number :";
    cin >> num;
    if (num & 1){
        cout << "LSB is 1";
    }
    else{
        cout << "LSB is 0";
    }


    return 0;
}
