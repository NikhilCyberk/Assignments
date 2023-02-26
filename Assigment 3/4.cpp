/*Write a program to check whether a given number is an even number or an odd 
number without using % operator.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number :";
    cin >> n;
    if (n&1){
        cout << "number is odd";
    }
    else{
        cout <<"number is even";
    }

    return 0;
}