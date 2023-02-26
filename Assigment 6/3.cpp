/*Write a program to calculate sum of first N odd natural numbers*/


#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        sum+=(i*2)-1;
    }
    cout << "sum of n odd number : "<< sum;
    return 0;
}