/*Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)
*/

#include<iostream>
using namespace std;
int main(){
    int num,rem;
    cout << "enter a number :";
    cin >> num;
    rem =num%10;
    num=num-rem;;
    cout <<"\n"<< num;
    return 0;
}
