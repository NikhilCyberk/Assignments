/*Write a program to print the first 10 even natural 
numbers in reverse orde*/

#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout << "enter a number: ";
    cin >> n;

    for(i=n;i>0;i--){
        cout << i*2 <<"\n";
    }
    return 0;
}

