/*Assume price of 1 USD is INR 76.23. 
Write a program to take the amount in INR and 
convert it into USD.*/
#include<iostream>
using namespace std;
int main(){
    float inr,usd;
    cout <<"enter value i  INR: ";
    cin >> inr;
    usd=inr/76.23;
    cout <<"\ninr :"<<inr<<" usd :"<< usd;

    return 0;
}
