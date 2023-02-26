/*Write a program to calculate factorial of a number*/



#include<iostream>
using namespace std;
int main(){
    int i,n,sum=1;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        sum*=i;
    }
    cout << "factorial : "<< sum;
    return 0;
}