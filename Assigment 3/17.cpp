/*Write a program which takes the length
 of the sides of a triangle as an 
input. Display 
whether the triangle is valid or 
not. */

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter the size of triangle: ";
    cin >> a >> b >> c;
    if(a+b>c){
        cout << "side are valid";
    }
    else {
        cout << "side are invalid" ;
    }
    return 0;
}