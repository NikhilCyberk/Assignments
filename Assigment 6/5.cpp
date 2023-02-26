/*Write a program to calculate sum of cube of first N natural numbers*/


#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        sum+=i*i*i;
    }
    cout << "sum of n square number : "<< sum;
    return 0;
}