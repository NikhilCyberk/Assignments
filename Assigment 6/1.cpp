/*Write a program to calculate sum of first N natural numbers*/
#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout << "enter a number:";
    cin >> n;
    for(i=0;i<n;i++){
        sum+=i;
    }
    cout << "\n sum of n number : " << sum;
    return 0;
}