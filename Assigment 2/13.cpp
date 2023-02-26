/* Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right.*/

#include<iostream>
using namespace std;
int main(){
   int n,r;
   cout << "enter three digit number :";
   cin >> n;
    r=n%10;
    n=n/10;
    r=r*100;
    n=r+n;
    cout << "\n" <<n;

    return 0;
}
