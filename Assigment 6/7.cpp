/*Write a program to count digits in a given number
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i , count,n;
    cout << "enter a number : ";
    cin >> n;
    for (i=0;i<sqrt(n);i++){
        if(i%n==0){
            cout << "number is not prime ";
            break;
        }
        else{
            cout << "number is not prime ";
        }
    }


    return 0;
}