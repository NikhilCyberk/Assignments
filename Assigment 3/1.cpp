//Write a program to check whether a given number is positive or non-positive
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a number";
    cin>>n;
    if(n>0){
        cout<<"number is positive :" << n;
    }
    else if(n<0){
        cout<<"number is non-positve :" <<n;
    }
    return 0;
}