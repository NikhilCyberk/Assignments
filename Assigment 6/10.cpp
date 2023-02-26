/*Write a program to reverse a given numbe*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,r,t=0;
    cout << "enter a number : ";
    cin >> a ;
    while(a>0){
        t*=10;
        r=a%10;
        t+=r;
        a=a/10;
        
    }
    cout << t;
    return 0;
}