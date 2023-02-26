/*Write a program to print the first 
10 even natural numbers*/
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        cout << i*2 <<"\n";
    }
    return 0;
}

