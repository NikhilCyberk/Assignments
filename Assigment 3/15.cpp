/*Write a program to check whether
 a given number is positive, negative or zero.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number :";
    cin >> n;
    if(n>0){
        cout <<"positive";
    }
    else if(n<0){
        cout << "negative";
    }    
    else{
        cout << "zero";
    }
    return 0;
}