/*Write a program to print the first 10 odd natural numbers 
in reverse order*/
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=10;i>0;i--){
        cout << (i*2)-1 <<"\n";
    }
    return 0;
}

