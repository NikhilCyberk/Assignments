/*Write a program to check whether a given year is a leap year or not.
*/

#include<iostream>
using namespace std;
int main(){
    int year;
    cout << "enter a year";
    cin >> year;
    if(year%4==0 || year%100==0 ){
        cout << "leap year";
    }
    else{
        cout << "not a leap year";
    }
    
    return 0;
}