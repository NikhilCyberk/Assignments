//Write a program to check whether a given number is divisible by 5 or not

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a number";
    cin>>n;
    if(n%5==0){
        cout<<"number is divisible by 5";
    }
    else{
        cout<<"number is not divisible";
    }
    return 0;
}