/*Write a program to calculate sum of first N even 
natural numbers*/

#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        sum+=i*2;
    }
    cout << "sum of n even number : "<< sum;
    return 0;
}