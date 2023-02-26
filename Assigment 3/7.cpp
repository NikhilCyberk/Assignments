/*Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout << "enter the coefficient of quad eq:\n";
    cout << "\n ax^2+bx+c\n";
    cout << "enter a: ";
    cin >> a;
    cout << "\nenter b: ";
    cin >> b;
    cout << "\nenter c: ";
    cin >> c;
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        cout << "roots distinct, real";
    }
    else if (d==0)
    {
        cout << "roots real & equal";
    }
    else if (d<0)
    {
        cout << "roots imaginary roots";
    }
    return 0;

}