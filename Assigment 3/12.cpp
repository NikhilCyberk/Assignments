/*Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter a character :";
    cin >> ch;
    if (ch>='A' && ch <='Z'){
        cout << "UPPERCASE";
    }
    else if (ch>='a' && ch <='z')
    {
        cout << "lowercase";
    }
    return 0;
}