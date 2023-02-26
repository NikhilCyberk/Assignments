/*Write a program to print the first 10 natural numbers.*/
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        cout << i <<"\n";
    }
    return 0;
}