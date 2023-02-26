/*Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter three number :a b c ";
    cin >> a>>b>>c;
    if(a>b)
        if(a>c){
            cout << a;
        }
    else if (b>c)   
    {
        cout << b;
    }
    else{
        cout << c;
    }
    return 0;
}