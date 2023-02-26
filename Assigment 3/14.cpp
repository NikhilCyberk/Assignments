/*. Write a program to check whether a given number is divisible
 by 7 or divisible by 3.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number :" ;
    cin >> n;
    if(n%7==0 && n%3==0){
        cout << "\nnumber is divisible by 7 and 3 both";
    }   
    else if(n%7==0){
        cout << "\nnumber is divisible by 2";
    }
    else if(n%3==0){
        cout << "\nnumber is divisible by 3";
    }
    else{
        cout <<"entered is not divisible by 7 and 3";
    }
    return 0;
}