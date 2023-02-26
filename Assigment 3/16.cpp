/*Write a program to check whether a 
given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter a character : ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z'){
        cout << "uppercase";
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase";
    }
    else if (ch >= '0' && ch <= '9'){
        cout << "digit";
    }   
    else if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase";
    }
    else if ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@')){
        cout << "special character";
    }
    else {
        cout << "invalid";
    }
    return 0;
}